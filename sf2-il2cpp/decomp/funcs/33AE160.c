// Nekki.SF2.GUI.Dialogs.BaseDialog$$JLBIECFKGPL @ RVA 0x33AE160

UnityEngine_RectTransform_o *
Nekki_SF2_GUI_Dialogs_BaseDialog__JLBIECFKGPL
          (Nekki_SF2_GUI_Dialogs_BaseDialog_o *__this,System_String_o *KGLJICLJHEL,
          MethodInfo *method)

{
  UnityEngine_Object_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Transform_o *parent;
  UnityEngine_RectTransform_o *__this_02;
  Nekki_SF2_GUI_Dialogs_DialogCanvasController_o *__this_03;
  UnityEngine_RectTransform_o *__this_04;
  Il2CppObject *pIVar1;
  UnityEngine_Rect_o UVar2;
  
                    /* catch() { ... } // from try @ 034addd4 with catch @ 034ae160 */
                    /* catch() { ... } // from try @ 034addf8 with catch @ 034ae164 */
                    /* catch() { ... } // from try @ 034ae144 with catch @ 034ae168 */
                    /* catch() { ... } // from try @ 034ae140 with catch @ 034ae16c */
                    /* catch() { ... } // from try @ 034ae13c with catch @ 034ae170 */
                    /* catch() { ... } // from try @ 034addcc with catch @ 034ae174 */
                    /* catch() { ... } // from try @ 034add3c with catch @ 034ae178 */
                    /* catch() { ... } // from try @ 034ae138 with catch @ 034ae17c */
                    /* catch() { ... } // from try @ 034ae134 with catch @ 034ae180 */
                    /* catch() { ... } // from try @ 034add7c with catch @ 034ae184 */
  if ((DAT_04567d3f & 1) == 0) {
                    /* catch() { ... } // from try @ 034add8c with catch @ 034ae188 */
                    /* catch() { ... } // from try @ 034add54 with catch @ 034ae18c */
                    /* catch() { ... } // from try @ 034add94 with catch @ 034ae190 */
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<CanvasRenderer>__);
                    /* catch() { ... } // from try @ 034add20 with catch @ 034ae194 */
                    /* catch() { ... } // from try @ 034adcfc with catch @ 034ae198 */
                    /* catch() { ... } // from try @ 034add08 with catch @ 034ae19c */
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<NonDrawingGraphic>__);
                    /* catch() { ... } // from try @ 034adcd8 with catch @ 034ae1a0 */
                    /* catch() { ... } // from try @ 034ae128 with catch @ 034ae1a4 */
                    /* catch() { ... } // from try @ 034adc78 with catch @ 034ae1a8 */
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<RectTransform>__);
                    /* catch() { ... } // from try @ 034adc1c with catch @ 034ae1ac */
    FUN_01bab630(&UnityEngine_GameObject_TypeInfo);
                    /* try { // try from 034ae1bc to 035ae1bf has its CatchHandler @ 034ae1d4 */
    FUN_01bab630(&UnityEngine_RectTransform_TypeInfo);
    DAT_04567d3f = 1;
  }
  __this_00 = (UnityEngine_Object_o *)thunk_FUN_01bda818(UnityEngine_GameObject_TypeInfo);
                    /* catch() { ... } // from try @ 034ae1bc with catch @ 034ae1d4 */
  UnityEngine_GameObject___ctor((UnityEngine_GameObject_o *)__this_00,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_Object_o *)0x0) {
                    /* try { // try from 034ae1e4 to 035ae24b has its CatchHandler @ 034ae260 */
    __this_01 = UnityEngine_GameObject__get_transform
                          ((UnityEngine_GameObject_o *)__this_00,(MethodInfo *)0x0);
    parent = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__SetParent(__this_01,parent,false,(MethodInfo *)0x0);
      UnityEngine_Object__set_name(__this_00,KGLJICLJHEL,(MethodInfo *)0x0);
      __this_02 = (UnityEngine_RectTransform_o *)
                  UnityEngine_GameObject__AddComponent<object>
                            ((UnityEngine_GameObject_o *)__this_00,
                             Method_UnityEngine_GameObject_AddComponent<RectTransform>__);
      if (__this_02 != (UnityEngine_RectTransform_o *)0x0) {
                    /* try { // try from 034ae24c to 035ae257 has its CatchHandler @ 034ad8dc */
        UnityEngine_RectTransform__set_anchorMin
                  (__this_02,(UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
                    /* try { // try from 034ae258 to 035ae25f has its CatchHandler @ 034ae260 */
                    /* catch() { ... } // from try @ 034ae1e4 with catch @ 034ae260
                       catch() { ... } // from try @ 034ae258 with catch @ 034ae260 */
                    /* try { // try from 034ae264 to 035ae3f3 has its CatchHandler @ 034ae264
                       catch() { ... } // from try @ 034ae264 with catch @ 034ae264
                       catch() { ... } // from try @ 034ae5c8 with catch @ 034ae264
                       catch() { ... } // from try @ 034ae694 with catch @ 034ae264
                       catch() { ... } // from try @ 034ae69c with catch @ 034ae264
                       catch() { ... } // from try @ 034ae7b0 with catch @ 034ae264 */
        UnityEngine_RectTransform__set_anchorMax
                  (__this_02,(UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
        UnityEngine_RectTransform__set_pivot
                  (__this_02,(UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
        __this_03 = Nekki_SF2_GUI_Dialogs_DialogCanvasController__get_Instance((MethodInfo *)0x0);
        if (((__this_03 != (Nekki_SF2_GUI_Dialogs_DialogCanvasController_o *)0x0) &&
            (__this_04 = (UnityEngine_RectTransform_o *)
                         UnityEngine_Component__get_transform
                                   ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0),
            __this_04 != (UnityEngine_RectTransform_o *)0x0)) &&
           (__this_04->klass == UnityEngine_RectTransform_TypeInfo)) {
          UVar2 = UnityEngine_RectTransform__get_rect(__this_04,(MethodInfo *)0x0);
          UnityEngine_RectTransform__set_sizeDelta
                    (__this_02,(UnityEngine_Vector2_o)UVar2.fields._8_8_,(MethodInfo *)0x0);
          UnityEngine_GameObject__AddComponent<object>
                    ((UnityEngine_GameObject_o *)__this_00,
                     Method_UnityEngine_GameObject_AddComponent<CanvasRenderer>__);
          pIVar1 = UnityEngine_GameObject__AddComponent<object>
                             ((UnityEngine_GameObject_o *)__this_00,
                              Method_UnityEngine_GameObject_AddComponent<NonDrawingGraphic>__);
          if (pIVar1 != (Il2CppObject *)0x0) {
            (*pIVar1->klass->vtable[0x19].methodPtr)(pIVar1,1,pIVar1->klass->vtable[0x19].method);
            return __this_02;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

