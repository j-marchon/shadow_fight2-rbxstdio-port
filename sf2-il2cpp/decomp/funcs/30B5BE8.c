// Nekki.SF2.GUI.TextPic$$LAGLMDPBDKN @ RVA 0x30B5BE8

System_Nullable_int__o
Nekki_SF2_GUI_TextPic__LAGLMDPBDKN(Nekki_SF2_GUI_TextPic_o *__this,MethodInfo *method)

{
  int32_t size;
  UnityEngine_Font_o *pUVar1;
  OMANDMDCGMF_MOHBDJOFHEN_o *__this_00;
  System_Nullable_int__Fields SVar2;
  int32_t value;
  MethodInfo *in_x2;
  System_Action_o *pSVar3;
  System_String_o *CJNHFNHJHPE;
  float fVar4;
  UnityEngine_Vector2_Fields local_40;
  System_Nullable_int__Fields local_38;
  
                    /* try { // try from 031b5bf4 to 032b5c1b has its CatchHandler @ 031b5e90 */
  if ((DAT_045661fd & 1) == 0) {
    FUN_01bab630(&OMANDMDCGMF_MOHBDJOFHEN_TypeInfo);
    FUN_01bab630(&Method_System_Nullable<int>__ctor__);
                    /* try { // try from 031b5c24 to 032b5c2f has its CatchHandler @ 031b5e8c */
    FUN_01bab630(&Method_Nekki_SF2_GUI_TextPic_KHKPMMKDLAM__);
    DAT_045661fd = 1;
  }
  local_40.x = 0.0;
  local_40.y = 0.0;
                    /* try { // try from 031b5c38 to 032b5c43 has its CatchHandler @ 031b5e80 */
  size = Nekki_SF2_GUI_TextPic__CGDJKDDKKKC(__this,(UnityEngine_Vector2_o *)&local_40,in_x2);
                    /* try { // try from 031b5c50 to 032b5c63 has its CatchHandler @ 031b5e84 */
  pUVar1 = UnityEngine_UI_Text__get_font((UnityEngine_UI_Text_o *)__this,(MethodInfo *)0x0);
  pSVar3 = (__this->fields).NFECDKAEFJL;
  if ((pSVar3 != (System_Action_o *)0x0) && (pUVar1 != (UnityEngine_Font_o *)0x0)) {
    UnityEngine_Font__RequestCharactersInTexture
              (pUVar1,(System_String_o *)(pSVar3->fields).super.super.method_ptr,size,
               (MethodInfo *)0x0);
    pUVar1 = UnityEngine_UI_Text__get_font((UnityEngine_UI_Text_o *)__this,(MethodInfo *)0x0);
                    /* try { // try from 031b5c7c to 032b5c83 has its CatchHandler @ 031b5e7c */
    pSVar3 = (__this->fields).NFECDKAEFJL;
    if (pSVar3 != (System_Action_o *)0x0) {
                    /* try { // try from 031b5c88 to 032b5ca3 has its CatchHandler @ 031b5e88 */
      CJNHFNHJHPE = (System_String_o *)(pSVar3->fields).super.super.method_ptr;
      __this_00 = (OMANDMDCGMF_MOHBDJOFHEN_o *)thunk_FUN_01bda818(OMANDMDCGMF_MOHBDJOFHEN_TypeInfo);
                    /* try { // try from 031b5cb4 to 032b5cbf has its CatchHandler @ 031b5e74 */
      OMANDMDCGMF_MOHBDJOFHEN___ctor
                (__this_00,(Il2CppObject *)__this,Method_Nekki_SF2_GUI_TextPic_KHKPMMKDLAM__,
                 (MethodInfo *)0x0);
                    /* try { // try from 031b5cc0 to 032b5ccf has its CatchHandler @ 031b5e70 */
      fVar4 = OMANDMDCGMF__GPEPOJMOHKA(pUVar1,CJNHFNHJHPE,size,__this_00,(MethodInfo *)0x0);
                    /* try { // try from 031b5cd4 to 032b5cf3 has its CatchHandler @ 031b5e78 */
      if ((fVar4 <= 0.0) || (local_40.x <= 0.0)) {
        local_38.hasValue = false;
        local_38._1_3_ = 0;
        local_38.value = 0;
      }
      else {
        fVar4 = local_40.x / fVar4;
        value = size;
        if (fVar4 < 1.0) {
                    /* try { // try from 031b5d04 to 032b5d0f has its CatchHandler @ 031b5e68 */
          if (fVar4 <= 0.35) {
            SVar2.hasValue = false;
            SVar2._1_3_ = 0;
            SVar2.value = 0;
            return (System_Nullable_int__o)SVar2;
          }
                    /* try { // try from 031b5d10 to 032b5d2f has its CatchHandler @ 031b5e6c */
          value = -0x80000000;
                    /* try { // try from 031b5d30 to 032b5e17 has its CatchHandler @ 031b57ec */
          if (fVar4 * (float)size != INFINITY) {
            value = (int)(fVar4 * (float)size);
          }
        }
        local_38.hasValue = false;
        local_38._1_3_ = 0;
        local_38.value = 0;
        System_Nullable<int>___ctor
                  ((System_Nullable_int__o)&local_38,value,Method_System_Nullable<int>__ctor__);
      }
      return (System_Nullable_int__o)local_38;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

