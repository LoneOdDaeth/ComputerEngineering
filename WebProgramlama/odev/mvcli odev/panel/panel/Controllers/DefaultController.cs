using panel.Models;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.Mvc;
using System.Web.Security;
using static System.Net.Mime.MediaTypeNames;

namespace panel.Controllers
{
    public class DefaultController : Controller
    {
        // GET: Default
        public ActionResult Index()
        {
            var liste = db.panel_info.ToList();

            ViewBag.sayi = db.panel_info.Count();
            return View(liste);
        }

        [HttpGet]
        public ActionResult login()
        {
           return View();
        }


        [HttpPost]
        public ActionResult login(panel_info entity)
        {
            var user = db.panel_info.FirstOrDefault(x => x.username == entity.username && x.password == entity.password);
            if (user != null)
            {
                // Başarılı giriş durumunda yönlendirme yapabilirsiniz.
                TempData["SuccessMessage"] = "Başarılı bir şekilde giriş yaptınız.";

               return RedirectToAction("Index", "Default");
            }
            else
            {
                //ModelState.AddModelError(string.Empty, "Giriş başarısız. Kullanıcı bulunamadı.");
                TempData["ErrorMessage"] = "Giriş başarısız. Kullanıcı bulunamadı.";
                return View(entity);
            }

            //return View();
        }

        panelEntities2 db = new panelEntities2();
        public ActionResult Model1() 
        {
            var liste = db.panel_info.ToList();

            ViewBag.sayi = db.panel_info.Count();
            return View(liste);
        }
    } 
}