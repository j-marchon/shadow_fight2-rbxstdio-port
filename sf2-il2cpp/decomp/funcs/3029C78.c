// Nekki.SF2.GUI.SimpleScroll$$GMEOEFHKANF @ RVA 0x3029C78

System_Collections_IEnumerator_o *
Nekki_SF2_GUI_SimpleScroll__GMEOEFHKANF
          (Nekki_SF2_GUI_SimpleScroll_o *__this,UnityEngine_Vector2_o MJBMLNKAPGC,float PNEIGGOFIOA,
          int32_t GAJONDLDKLI,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if ((DAT_04565cb2 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_SimpleScroll_NLGHFAKLCEI_TypeInfo);
    DAT_04565cb2 = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(Nekki_SF2_GUI_SimpleScroll_NLGHFAKLCEI_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  __this_00[2].monitor = __this;
  thunk_FUN_01c20e04(&__this_00[2].monitor,__this);
  *(float *)&__this_00[3].klass = MJBMLNKAPGC.fields.x;
  *(float *)((long)&__this_00[3].klass + 4) = MJBMLNKAPGC.fields.y;
  *(float *)&__this_00[2].klass = PNEIGGOFIOA;
  *(int32_t *)((long)&__this_00[2].klass + 4) = GAJONDLDKLI;
  return (System_Collections_IEnumerator_o *)__this_00;
}

