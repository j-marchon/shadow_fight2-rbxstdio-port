// Nekki.SF2.GUI.GeneralMenu.GeneralMenuScene$$IEJBEKPANNP @ RVA 0x324E738

System_Collections_IEnumerator_o *
Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene__IEJBEKPANNP
          (Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_o *__this,int32_t NFIGEAOPJKM,
          float NDPMILBBAPD,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if ((DAT_04567117 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_HIONODLPPCK_TypeInfo);
    DAT_04567117 = 1;
  }
  __this_00 = (Il2CppObject *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_HIONODLPPCK_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  __this_00[2].klass = (Il2CppClass *)__this;
  thunk_FUN_01c20e04(__this_00 + 2,__this);
  *(int32_t *)&__this_00[2].monitor = NFIGEAOPJKM;
  *(float *)((long)&__this_00[2].monitor + 4) = NDPMILBBAPD;
  return (System_Collections_IEnumerator_o *)__this_00;
}

