// Nekki.SF2.GUI.MultiImageButton$$HGJPLFBAFOB @ RVA 0x3251350

UnityEngine_UI_Graphic_array *
Nekki_SF2_GUI_MultiImageButton__HGJPLFBAFOB
          (Nekki_SF2_GUI_MultiImageButton_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Graphic_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_UI_Graphic_array *pUVar1;
  
                    /* try { // try from 03351360 to 03451367 has its CatchHandler @ 03351400 */
  if ((DAT_04567135 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponentsInChildren<Graphic>__);
                    /* try { // try from 03351374 to 0345139b has its CatchHandler @ 03351404 */
    DAT_04567135 = 1;
  }
  __this_00 = (__this->fields).super.super.m_TargetGraphic;
  if ((__this_00 != (UnityEngine_UI_Graphic_o *)0x0) &&
     (__this_01 = UnityEngine_Component__get_transform
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_Transform_o *)0x0)) {
                    /* try { // try from 0335139c to 034513f3 has its CatchHandler @ 03351294 */
    pUVar1 = (UnityEngine_UI_Graphic_array *)
             UnityEngine_Component__GetComponentsInChildren<object>
                       ((UnityEngine_Component_o *)__this_01,
                        Method_UnityEngine_Component_GetComponentsInChildren<Graphic>__);
    return pUVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

