// Nekki.SF2.GUI.Profile.ProfileBottomPanel$$ACJPCPPOACJ @ RVA 0x332DCCC

MGNDHCBAPEN_string__string__o *
Nekki_SF2_GUI_Profile_ProfileBottomPanel__ACJPCPPOACJ
          (Nekki_SF2_GUI_Profile_ProfileBottomPanel_o *__this,int32_t HIIGJGLEOFH,MethodInfo *method
          )

{
  MGNDHCBAPEN_string__string__o *__this_00;
  undefined8 *puVar1;
  
  if ((DAT_045678ee & 1) == 0) {
    FUN_01bab630(&Method_MGNDHCBAPEN<string,_string>__ctor__);
    FUN_01bab630(&MGNDHCBAPEN<string,_string>_TypeInfo);
    FUN_01bab630(&StringLiteral_10493);
    FUN_01bab630(&StringLiteral_10496);
    FUN_01bab630(&StringLiteral_10495);
    FUN_01bab630(&StringLiteral_14092);
    FUN_01bab630(&StringLiteral_10492);
    FUN_01bab630(&StringLiteral_10494);
    DAT_045678ee = 1;
  }
  if ((uint)HIIGJGLEOFH < 5) {
    puVar1 = (undefined8 *)(&PTR_StringLiteral_10494_03fc66d8)[HIIGJGLEOFH];
    __this_00 = (MGNDHCBAPEN_string__string__o *)
                thunk_FUN_01bda818(MGNDHCBAPEN<string,_string>_TypeInfo);
    MGNDHCBAPEN<object,_object>___ctor
              ((MGNDHCBAPEN_T1__T2__o *)__this_00,StringLiteral_14092,(Il2CppObject *)*puVar1,
               Method_MGNDHCBAPEN<string,_string>__ctor__);
  }
  else {
    __this_00 = (MGNDHCBAPEN_string__string__o *)0x0;
  }
                    /* try { // try from 0342dda4 to 0352ddcb has its CatchHandler @ 0342e2a8 */
  return __this_00;
}

