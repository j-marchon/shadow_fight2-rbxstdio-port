// Nekki.SF2.GUI.Fight.ValueLine$$KCHPGFNJJPA @ RVA 0x30DF108

void Nekki_SF2_GUI_Fight_ValueLine__KCHPGFNJJPA
               (Nekki_SF2_GUI_Fight_ValueLine_o *__this,MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *__this_00;
  System_Globalization_NumberFormatInfo_o *__this_01;
  DG_Tweening_Sequence_o *pDVar2;
  DG_Tweening_Core_DOGetter_long__o *getter;
  DG_Tweening_Core_DOSetter_long__o *setter;
  DG_Tweening_Core_TweenerCore_long__long__NoOptions__o *t;
  DG_Tweening_TweenCallback_o *callback;
  UnityEngine_Events_UnityEvent_o *__this_02;
  MethodInfo *extraout_x1;
  DG_Tweening_Sequence_o **ppDVar3;
  Nekki_SF2_GUI_Fight_IconAndText_o *x;
  int64_t endValue;
  float duration;
  
  if ((DAT_0456638c & 1) == 0) {
    FUN_01bab630(&DG_Tweening_Core_DOGetter<long>_TypeInfo);
    FUN_01bab630(&DG_Tweening_Core_DOSetter<long>_TypeInfo);
    FUN_01bab630(&DG_Tweening_DOTween_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_ValueLine_FPFALLJLCCC_FBJDHDNHOAC__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_ValueLine_FPFALLJLCCC_JFODEOJOHGB__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_ValueLine_FPFALLJLCCC_NCOHGDFHGHK__);
    FUN_01bab630(&Nekki_SF2_GUI_Fight_ValueLine_FPFALLJLCCC_TypeInfo);
    FUN_01bab630(&System_Globalization_NumberFormatInfo_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&DG_Tweening_TweenCallback_TypeInfo);
    FUN_01bab630(&StringLiteral_167);
    DAT_0456638c = 1;
    method = extraout_x1;
  }
  __this_00 = (Il2CppObject *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_Fight_ValueLine_FPFALLJLCCC_TypeInfo,method);
                    /* try { // try from 031df1cc to 032df1f3 has its CatchHandler @ 031df3dc */
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)__this;
    thunk_FUN_01c20e04(__this_00 + 1,__this);
    __this_01 = (System_Globalization_NumberFormatInfo_o *)
                thunk_FUN_01bda818(System_Globalization_NumberFormatInfo_TypeInfo);
    System_Globalization_NumberFormatInfo___ctor(__this_01,(MethodInfo *)0x0);
    if (__this_01 != (System_Globalization_NumberFormatInfo_o *)0x0) {
                    /* try { // try from 031df228 to 032df253 has its CatchHandler @ 031df3d8 */
      System_Globalization_NumberFormatInfo__set_NumberGroupSeparator
                (__this_01,StringLiteral_167,(MethodInfo *)0x0);
      __this_00[1].monitor = __this_01;
      thunk_FUN_01c20e04(&__this_00[1].monitor,__this_01);
      if ((DG_Tweening_DOTween_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pDVar2 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
      ppDVar3 = &(__this->fields).FNMDIKCCJAN;
      *ppDVar3 = pDVar2;
      thunk_FUN_01c20e04(ppDVar3,pDVar2);
      x = (__this->fields).valueLabel;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
                    /* try { // try from 031df288 to 032df2e7 has its CatchHandler @ 031df3e4 */
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar1) {
        getter = (DG_Tweening_Core_DOGetter_long__o *)
                 thunk_FUN_01bda818(DG_Tweening_Core_DOGetter<long>_TypeInfo);
        DG_Tweening_Core_DOGetter<long>___ctor();
        setter = (DG_Tweening_Core_DOSetter_long__o *)
                 thunk_FUN_01bda818(DG_Tweening_Core_DOSetter<long>_TypeInfo);
                    /* try { // try from 031df2e8 to 032df3b3 has its CatchHandler @ 031df058 */
        DG_Tweening_Core_DOSetter<long>___ctor();
        endValue = (__this->fields).CFJPINKJPOD;
        duration = (__this->fields).valueAddTime;
        if ((DG_Tweening_DOTween_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        t = DG_Tweening_DOTween__To(getter,setter,endValue,duration,(MethodInfo *)0x0);
        DG_Tweening_TweenSettingsExtensions__Append
                  (*ppDVar3,(DG_Tweening_Tween_o *)t,(MethodInfo *)0x0);
        pDVar2 = *ppDVar3;
        callback = (DG_Tweening_TweenCallback_o *)
                   thunk_FUN_01bda818(DG_Tweening_TweenCallback_TypeInfo);
        DG_Tweening_TweenCallback___ctor();
        DG_Tweening_TweenSettingsExtensions__AppendCallback(pDVar2,callback,(MethodInfo *)0x0);
        return;
      }
      __this_02 = (__this->fields).JLKPBAGACID;
      if (__this_02 != (UnityEngine_Events_UnityEvent_o *)0x0) {
        UnityEngine_Events_UnityEvent__Invoke(__this_02,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

