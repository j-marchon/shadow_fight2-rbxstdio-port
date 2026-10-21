// GIAMPEGMNHE$$ABNFMFGPMMN @ RVA 0x330DF0C

int32_t GIAMPEGMNHE__ABNFMFGPMMN
                  (System_String_o *CCKJFMILHLC,int32_t FPIDIMDDGOI,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_0456779d & 1) == 0) {
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    DAT_0456779d = 1;
  }
  if (FPIDIMDDGOI == 0) {
    if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (CCKJFMILHLC == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = System_String__StartsWith
                      (CCKJFMILHLC,MGENAMAJALB_TypeInfo->static_fields->HDAMIJBIMGF,
                       (MethodInfo *)0x0);
    if (!bVar1) {
      if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar1 = System_String__StartsWith
                        (CCKJFMILHLC,MGENAMAJALB_TypeInfo->static_fields->NENINNJGODF,
                         (MethodInfo *)0x0);
      if (!bVar1) {
        return 1;
      }
    }
    FPIDIMDDGOI = 2;
  }
  return FPIDIMDDGOI;
}

