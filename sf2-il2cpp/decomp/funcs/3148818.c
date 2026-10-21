// KKLJIDJBFEI$$AOGEKFNDJEA @ RVA 0x3148818

void KKLJIDJBFEI__AOGEKFNDJEA
               (KKLJIDJBFEI_o *__this,System_Action_KEFHDOHHHML__o *IELDNEAAPBE,MethodInfo *method)

{
  PGICCMFLDPI_o *__this_00;
  System_DateTime_o OLFIPBLKDAH;
  int64_t iVar1;
  
  if ((DAT_04566792 & 1) == 0) {
    FUN_01bab630(&System_DateTime_TypeInfo);
    FUN_01bab630(&PGICCMFLDPI_TypeInfo);
    FUN_01bab630(&StringLiteral_20209);
    DAT_04566792 = 1;
  }
  __this_00 = (PGICCMFLDPI_o *)thunk_FUN_01bda818(PGICCMFLDPI_TypeInfo);
  PGICCMFLDPI___ctor(__this_00,(MethodInfo *)0x0);
  if ((System_DateTime_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  OLFIPBLKDAH = System_DateTime__get_UtcNow((MethodInfo *)0x0);
  iVar1 = DPNBGNOIKEJ__FAJDJBBKNIG(OLFIPBLKDAH,(MethodInfo *)0x0);
  if (__this_00 != (PGICCMFLDPI_o *)0x0) {
    (__this_00->fields).GDKPGIBMFPA = iVar1;
    KDPDBGNOFEN__KLNMLOOCAAO
              ((KDPDBGNOFEN_o *)__this,StringLiteral_20209,(Google_Protobuf_IMessage_o *)__this_00,
               IELDNEAAPBE,0.0,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

