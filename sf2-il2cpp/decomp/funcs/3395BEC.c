// Nekki.SF2.GUI.Profile.ProfileScene$$DIGPCDFMFBD @ RVA 0x3395BEC

System_Collections_IEnumerator_o *
Nekki_SF2_GUI_Profile_ProfileScene__DIGPCDFMFBD
          (Nekki_SF2_GUI_Profile_ProfileScene_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567c54 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Profile_ProfileScene_JMFBANHHIPM_TypeInfo);
    DAT_04567c54 = 1;
    method = extraout_x1;
  }
  __this_00 = (Il2CppObject *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_Profile_ProfileScene_JMFBANHHIPM_TypeInfo,method);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  __this_00[2].klass = (Il2CppClass *)__this;
  thunk_FUN_01c20e04(__this_00 + 2,__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}

