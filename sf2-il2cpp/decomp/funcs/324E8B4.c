// Nekki.SF2.GUI.GeneralMenu.GeneralMenuScene$$DJDOKKJGOFJ @ RVA 0x324E8B4

System_Collections_IEnumerator_o *
Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene__DJDOKKJGOFJ
          (Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_o *__this,Il2CppObject *IMMNELPBGIF,
          int32_t NFIGEAOPJKM,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if ((DAT_04567111 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_KHCLJKKPKNA_TypeInfo);
    DAT_04567111 = 1;
  }
  __this_00 = (Il2CppObject *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_KHCLJKKPKNA_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  __this_00[3].klass = (Il2CppClass *)__this;
  thunk_FUN_01c20e04(__this_00 + 3,__this);
  __this_00[2].klass = (Il2CppClass *)IMMNELPBGIF;
  thunk_FUN_01c20e04(__this_00 + 2,IMMNELPBGIF);
  *(int32_t *)&__this_00[2].monitor = NFIGEAOPJKM;
  return (System_Collections_IEnumerator_o *)__this_00;
}

