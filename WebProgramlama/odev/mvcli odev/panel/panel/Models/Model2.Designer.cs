﻿//------------------------------------------------------------------------------
// <auto-generated>
//    Bu kod bir şablondan oluşturuldu.
//
//    Bu dosyada el ile yapılan değişiklikler uygulamanızda beklenmedik davranışa neden olabilir.
//    Kod yeniden oluşturulursa, bu dosyada el ile yapılan değişikliklerin üzerine yazılacak.
// </auto-generated>
//------------------------------------------------------------------------------

using System;
using System.ComponentModel;
using System.Data.EntityClient;
using System.Data.Objects;
using System.Data.Objects.DataClasses;
using System.Linq;
using System.Runtime.Serialization;
using System.Xml.Serialization;

[assembly: EdmSchemaAttribute()]
namespace panel.Models
{
    #region Bağlamlar
    
    /// <summary>
    /// Kullanılabilir Meta Veri Belgeleri yok.
    /// </summary>
    public partial class panelEntities1 : ObjectContext
    {
        #region Oluşturucular
    
        /// <summary>
        /// Yeni panelEntities1 nesnesini, uygulama yapılandırma dosyasının 'panelEntities1' bölümünde bulunan bağlantı dizesini kullanarak başlatır.
        /// </summary>
        public panelEntities1() : base("name=panelEntities1", "panelEntities1")
        {
            this.ContextOptions.LazyLoadingEnabled = true;
            OnContextCreated();
        }
    
        /// <summary>
        /// Yeni bir panelEntities1 nesnesi başlatın.
        /// </summary>
        public panelEntities1(string connectionString) : base(connectionString, "panelEntities1")
        {
            this.ContextOptions.LazyLoadingEnabled = true;
            OnContextCreated();
        }
    
        /// <summary>
        /// Yeni bir panelEntities1 nesnesi başlatın.
        /// </summary>
        public panelEntities1(EntityConnection connection) : base(connection, "panelEntities1")
        {
            this.ContextOptions.LazyLoadingEnabled = true;
            OnContextCreated();
        }
    
        #endregion
    
        #region Kısmi Metotlar
    
        partial void OnContextCreated();
    
        #endregion
    
        #region ObjectSet Özellikleri
    
        /// <summary>
        /// Kullanılabilir Meta Veri Belgeleri yok.
        /// </summary>
        public ObjectSet<panel_info> panel_info
        {
            get
            {
                if ((_panel_info == null))
                {
                    _panel_info = base.CreateObjectSet<panel_info>("panel_info");
                }
                return _panel_info;
            }
        }
        private ObjectSet<panel_info> _panel_info;

        #endregion

        #region AddTo Metotları
    
        /// <summary>
        /// panel_info EntitySet'e yeni nesne ekleme için Deprecated Metodu. Bunun yerine, ilişkili ObjectSet&lt;T&gt; özelliğinin .Add metodunu kullanmayı deneyin.
        /// </summary>
        public void AddTopanel_info(panel_info panel_info)
        {
            base.AddObject("panel_info", panel_info);
        }

        #endregion

    }

    #endregion

    #region Varlıklar
    
    /// <summary>
    /// Kullanılabilir Meta Veri Belgeleri yok.
    /// </summary>
    [EdmEntityTypeAttribute(NamespaceName="panelModel", Name="panel_info")]
    [Serializable()]
    [DataContractAttribute(IsReference=true)]
    public partial class panel_info : EntityObject
    {
        #region Factory Metodu
    
        /// <summary>
        /// Yeni bir panel_info nesnesi oluşturun.
        /// </summary>
        /// <param name="id">id özelliğinin ilk değeri.</param>
        public static panel_info Createpanel_info(global::System.Int32 id)
        {
            panel_info panel_info = new panel_info();
            panel_info.id = id;
            return panel_info;
        }

        #endregion

        #region Basit Özellikler
    
        /// <summary>
        /// Kullanılabilir Meta Veri Belgeleri yok.
        /// </summary>
        [EdmScalarPropertyAttribute(EntityKeyProperty=true, IsNullable=false)]
        [DataMemberAttribute()]
        public global::System.Int32 id
        {
            get
            {
                return _id;
            }
            set
            {
                if (_id != value)
                {
                    OnidChanging(value);
                    ReportPropertyChanging("id");
                    _id = StructuralObject.SetValidValue(value, "id");
                    ReportPropertyChanged("id");
                    OnidChanged();
                }
            }
        }
        private global::System.Int32 _id;
        partial void OnidChanging(global::System.Int32 value);
        partial void OnidChanged();
    
        /// <summary>
        /// Kullanılabilir Meta Veri Belgeleri yok.
        /// </summary>
        [EdmScalarPropertyAttribute(EntityKeyProperty=false, IsNullable=true)]
        [DataMemberAttribute()]
        public global::System.String username
        {
            get
            {
                return _username;
            }
            set
            {
                OnusernameChanging(value);
                ReportPropertyChanging("username");
                _username = StructuralObject.SetValidValue(value, true, "username");
                ReportPropertyChanged("username");
                OnusernameChanged();
            }
        }
        private global::System.String _username;
        partial void OnusernameChanging(global::System.String value);
        partial void OnusernameChanged();
    
        /// <summary>
        /// Kullanılabilir Meta Veri Belgeleri yok.
        /// </summary>
        [EdmScalarPropertyAttribute(EntityKeyProperty=false, IsNullable=true)]
        [DataMemberAttribute()]
        public global::System.String password
        {
            get
            {
                return _password;
            }
            set
            {
                OnpasswordChanging(value);
                ReportPropertyChanging("password");
                _password = StructuralObject.SetValidValue(value, true, "password");
                ReportPropertyChanged("password");
                OnpasswordChanged();
            }
        }
        private global::System.String _password;
        partial void OnpasswordChanging(global::System.String value);
        partial void OnpasswordChanged();

        #endregion

    }

    #endregion

}