// NCNJEIBHGBH.JFILHCHBMEC$$DLGHGNBOKHP @ RVA 0x32F63AC

bool NCNJEIBHGBH_JFILHCHBMEC__DLGHGNBOKHP
               (NCNJEIBHGBH_JFILHCHBMEC_o *__this,FKNCNNOOOIO_o *p_info,MethodInfo *method)

{
  bool bVar1;
  FKNCNNOOOIO_o *pFVar2;
  
  if ((p_info != (FKNCNNOOOIO_o *)0x0) &&
     (pFVar2 = (__this->fields).mapButtonInfo, pFVar2 != (FKNCNNOOOIO_o *)0x0)) {
    bVar1 = System_String__op_Equality
                      ((p_info->fields).JIJLBFGKNJK,(pFVar2->fields).JIJLBFGKNJK,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

