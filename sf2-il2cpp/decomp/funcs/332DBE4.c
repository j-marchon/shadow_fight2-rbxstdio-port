// Nekki.SF2.GUI.Profile.ProfileBottomPanel$$GEFAAMGLMMC @ RVA 0x332DBE4

MGNDHCBAPEN_string__string__o *
Nekki_SF2_GUI_Profile_ProfileBottomPanel__GEFAAMGLMMC
          (Nekki_SF2_GUI_Profile_ProfileBottomPanel_o *__this,int32_t HIIGJGLEOFH,MethodInfo *method
          )

{
  MGNDHCBAPEN_string__string__o *__this_00;
  undefined8 *puVar1;
  
  if ((DAT_045678ed & 1) == 0) {
    FUN_01bab630(&Method_MGNDHCBAPEN<string,_string>__ctor__);
    FUN_01bab630(&MGNDHCBAPEN<string,_string>_TypeInfo);
    FUN_01bab630(&StringLiteral_10501);
    FUN_01bab630(&StringLiteral_10498);
    FUN_01bab630(&StringLiteral_10500);
    FUN_01bab630(&StringLiteral_14092);
    FUN_01bab630(&StringLiteral_10499);
    FUN_01bab630(&StringLiteral_10497);
    DAT_045678ed = 1;
  }
  if ((uint)HIIGJGLEOFH < 5) {
    puVar1 = (undefined8 *)(&PTR_StringLiteral_10499_03fc66b0)[HIIGJGLEOFH];
    __this_00 = (MGNDHCBAPEN_string__string__o *)
                thunk_FUN_01bda818(MGNDHCBAPEN<string,_string>_TypeInfo);
    MGNDHCBAPEN<object,_object>___ctor
              ((MGNDHCBAPEN_T1__T2__o *)__this_00,StringLiteral_14092,(Il2CppObject *)*puVar1,
               Method_MGNDHCBAPEN<string,_string>__ctor__);
  }
  else {
    __this_00 = (MGNDHCBAPEN_string__string__o *)0x0;
  }
  return __this_00;
}

