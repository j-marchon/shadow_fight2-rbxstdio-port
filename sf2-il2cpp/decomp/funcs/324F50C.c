// Nekki.SF2.GUI.GeneralMenu.GeneralMenuScene$$ANICGJMJLNE @ RVA 0x324F50C

System_Collections_IEnumerator_o *
Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene__ANICGJMJLNE
          (Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_o *__this,float NDPMILBBAPD,MethodInfo *method
          )

{
  Il2CppObject *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456711a & 1) == 0) {
                    /* try { // try from 0334f534 to 0344f783 has its CatchHandler @ 0334f534
                       catch() { ... } // from try @ 0334f534 with catch @ 0334f534
                       catch() { ... } // from try @ 0334f8c4 with catch @ 0334f534
                       catch() { ... } // from try @ 0334fa1c with catch @ 0334f534
                       catch() { ... } // from try @ 0334fbbc with catch @ 0334f534
                       catch() { ... } // from try @ 0334fc80 with catch @ 0334f534
                       catch() { ... } // from try @ 0334fc90 with catch @ 0334f534
                       catch() { ... } // from try @ 0334fd44 with catch @ 0334f534
                       catch() { ... } // from try @ 0334fdf8 with catch @ 0334f534
                       catch() { ... } // from try @ 0334fe44 with catch @ 0334f534
                       catch() { ... } // from try @ 0334fee0 with catch @ 0334f534 */
    FUN_01bab630(&Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_CMLKLGIDBAF_TypeInfo);
    DAT_0456711a = 1;
    method = extraout_x1;
  }
  __this_00 = (Il2CppObject *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_CMLKLGIDBAF_TypeInfo,
                                 method);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  __this_00[2].klass = (Il2CppClass *)__this;
  thunk_FUN_01c20e04(__this_00 + 2,__this);
  *(float *)&__this_00[2].monitor = NDPMILBBAPD;
  return (System_Collections_IEnumerator_o *)__this_00;
}

