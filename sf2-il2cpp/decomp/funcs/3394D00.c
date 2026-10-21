// Nekki.SF2.GUI.Profile.ProfileScene$$LDNIFMLAKHM @ RVA 0x3394D00

System_Collections_IEnumerator_o *
Nekki_SF2_GUI_Profile_ProfileScene__LDNIFMLAKHM
          (Nekki_SF2_GUI_Profile_ProfileScene_o *__this,JLGNBOILFLN_o *CDEABOAKDEJ,
          MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if ((DAT_04567c4b & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Profile_ProfileScene_ADBKDCAJPFM_TypeInfo);
    DAT_04567c4b = 1;
  }
  __this_00 = (Il2CppObject *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_Profile_ProfileScene_ADBKDCAJPFM_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  __this_00[2].klass = (Il2CppClass *)__this;
  thunk_FUN_01c20e04(__this_00 + 2,__this);
  __this_00[2].monitor = CDEABOAKDEJ;
  thunk_FUN_01c20e04(&__this_00[2].monitor,CDEABOAKDEJ);
  return (System_Collections_IEnumerator_o *)__this_00;
}

