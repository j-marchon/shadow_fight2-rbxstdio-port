// OLKKAIFGGAK$$BJJFFANJPAF @ RVA 0x34F7B34

void OLKKAIFGGAK__BJJFFANJPAF(OLKKAIFGGAK_o *__this,bool MGAOLFBDJCI,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  NJPBHDMCLIN_o *__this_00;
  OLKKAIFGGAK_IEMCMOPNPEA_o *__this_01;
  MethodInfo *pMVar3;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_01;
  OLKKAIFGGAK_o *pOVar4;
  
  pMVar3 = (MethodInfo *)(ulong)MGAOLFBDJCI;
  if ((DAT_045687f7 & 1) == 0) {
    FUN_01bab630(&OIGAJAKPPEO_TypeInfo);
    DAT_045687f7 = 1;
    pMVar3 = extraout_x1;
  }
  OLKKAIFGGAK__GAMIFCKJMKO(__this,pMVar3);
  OLKKAIFGGAK__JEPCCDPBAJM(__this,method_00);
  pMVar3 = extraout_x1_00;
  if (__this != (OLKKAIFGGAK_o *)0x0) {
    bVar1 = (OIGAJAKPPEO_TypeInfo->_2).naturalAligment;
    if ((((bVar1 <= (__this->klass->_2).naturalAligment) &&
         ((__this->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)OIGAJAKPPEO_TypeInfo
         )) && ((__this->fields).NFMBPIPEKGF != (OLKKAIFGGAK_o *)0x0)) &&
       ((bVar2 = PCOEHCPGBBG__BDLEIEHBFAD((__this->fields).GGJCDBAMNOC,(MethodInfo *)0x0),
        pMVar3 = method_01, !bVar2 && (!MGAOLFBDJCI)))) {
      OLKKAIFGGAK__MEGMHJGGNDL(__this,method_01);
      OLKKAIFGGAK__NDNPGAKJLHM(__this,false,method);
      __this_00 = (__this->fields).FNEAAHOOHAA;
      if (__this_00 != (NJPBHDMCLIN_o *)0x0) {
        NJPBHDMCLIN__DGLJCGNHLIG(__this_00,(MethodInfo *)0x0);
        (__this->fields).FNEAAHOOHAA = (NJPBHDMCLIN_o *)0x0;
        thunk_FUN_01c20e04(&(__this->fields).FNEAAHOOHAA,0);
        pOVar4 = (__this->fields).NFMBPIPEKGF;
        if ((pOVar4 != (OLKKAIFGGAK_o *)0x0) &&
           (__this_01 = (pOVar4->fields).AGEDJIJMACH, __this_01 != (OLKKAIFGGAK_IEMCMOPNPEA_o *)0x0)
           ) {
          bVar1 = (OIGAJAKPPEO_TypeInfo->_2).naturalAligment;
          if ((bVar1 <= (__this->klass->_2).naturalAligment) &&
             ((__this->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
              (Il2CppClass *)OIGAJAKPPEO_TypeInfo)) {
            OLKKAIFGGAK_IEMCMOPNPEA__BOPOPKLPHOJ
                      (__this_01,(__this->fields).GGJCDBAMNOC,(OIGAJAKPPEO_o *)__this,
                       (MethodInfo *)0x0);
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(__this);
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  OLKKAIFGGAK__PCBMLFDNAOC(__this,pMVar3);
  return;
}

