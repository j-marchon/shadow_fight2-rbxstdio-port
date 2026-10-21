// Nekki.SF2.GUI.Shop.ParametersPanel$$CJGJOJIHCGF @ RVA 0x3486AA0

float Nekki_SF2_GUI_Shop_ParametersPanel__CJGJOJIHCGF
                (Nekki_SF2_GUI_Shop_ParametersPanel_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  Nekki_SF2_GUI_Shop_ParameterScrollItem_o *__this_01;
  System_Nullable_float__o *__this_02;
  float fVar1;
  System_Nullable_float__Fields local_18;
  
                    /* try { // try from 03586ab4 to 03686abb has its CatchHandler @ 03587094 */
  if ((DAT_045683b5 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<ParameterScrollItem>__);
                    /* try { // try from 03586acc to 03686ad3 has its CatchHandler @ 035870cc */
    FUN_01bab630(&Method_System_Nullable<float>__ctor__);
    FUN_01bab630(&Method_System_Nullable<float>_get_HasValue__);
                    /* try { // try from 03586ae4 to 03686aeb has its CatchHandler @ 035870b4 */
    FUN_01bab630(&Method_System_Nullable<float>_get_Value__);
    DAT_045683b5 = 1;
  }
  __this_02 = &(__this->fields).OIOACOCFGAM;
                    /* try { // try from 03586af8 to 03686aff has its CatchHandler @ 03587008 */
  if ((__this_02->fields).hasValue == false) {
    __this_00 = (__this->fields)._ItemPrefab;
                    /* try { // try from 03586b10 to 03686b17 has its CatchHandler @ 03587014 */
    if ((__this_00 == (UnityEngine_GameObject_o *)0x0) ||
       (__this_01 = (Nekki_SF2_GUI_Shop_ParameterScrollItem_o *)
                    UnityEngine_GameObject__GetComponent<object>
                              (__this_00,
                               Method_UnityEngine_GameObject_GetComponent<ParameterScrollItem>__),
       __this_01 == (Nekki_SF2_GUI_Shop_ParameterScrollItem_o *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
                    /* try { // try from 03586b18 to 03686b2b has its CatchHandler @ 03587024 */
    fVar1 = Nekki_SF2_GUI_Shop_ParameterScrollItem__get_MinHeight(__this_01,(MethodInfo *)0x0);
    local_18.hasValue = false;
    local_18._1_3_ = 0;
    local_18.value = 0.0;
                    /* try { // try from 03586b30 to 03686b3b has its CatchHandler @ 03587048 */
    System_Nullable<float>___ctor
              ((System_Nullable_float__o)&local_18,fVar1,Method_System_Nullable<float>__ctor__);
                    /* try { // try from 03586b3c to 03686b47 has its CatchHandler @ 03587050 */
    __this_02->fields = local_18;
  }
  fVar1 = System_Nullable<float>__get_Value
                    ((System_Nullable_float__o)__this_02,Method_System_Nullable<float>_get_Value__);
                    /* try { // try from 03586b58 to 03686b5f has its CatchHandler @ 03587054 */
  return fVar1;
}

