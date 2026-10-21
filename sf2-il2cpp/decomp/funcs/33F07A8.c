// FCJBEKHDLAF$$CMHIICAGBMH @ RVA 0x33F07A8

void FCJBEKHDLAF__CMHIICAGBMH
               (FCJBEKHDLAF_o *__this,OLKKAIFGGAK_EAOIGPODIAI_o *BCHKAEBGKGG,MethodInfo *method)

{
  byte bVar1;
  int32_t iVar2;
  MNLIBPAOCLG_o *__this_00;
  PKNBJJPHAKI_o *__this_01;
  System_Collections_Generic_Dictionary_object__object__o *__this_02;
  MethodInfo *method_00;
  BEPJMNAHCAD_o *pBVar3;
  OLKKAIFGGAK_o *pOVar4;
  MMDDDDFHOLG_o *pMVar5;
  JADGCGOJLJB_o *__this_03;
  
  if ((DAT_04567f0b & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_object>_set_Item__);
    FUN_01bab630(&JADGCGOJLJB_TypeInfo);
    FUN_01bab630(&StringLiteral_7628);
    DAT_04567f0b = 1;
  }
  if ((BCHKAEBGKGG == (OLKKAIFGGAK_EAOIGPODIAI_o *)0x0) ||
     (__this_03 = (JADGCGOJLJB_o *)(BCHKAEBGKGG->fields).KOANCCDDBDA,
     __this_03 == (JADGCGOJLJB_o *)0x0)) goto LAB_034f08dc;
  bVar1 = (JADGCGOJLJB_TypeInfo->_2).naturalAligment;
  if (((__this_03->klass->_2).naturalAligment < bVar1) ||
     ((__this_03->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)JADGCGOJLJB_TypeInfo)
     ) {
                    /* WARNING: Subroutine does not return */
    FUN_01babc64(__this_03);
  }
  iVar2 = JADGCGOJLJB__NHGGBEACKBD(__this_03,(MethodInfo *)0x0);
  if (iVar2 == 7) {
    pBVar3 = (__this->fields).FAJCMHDLBEJ;
    if ((pBVar3 == (BEPJMNAHCAD_o *)0x0) ||
       (__this_00 = (pBVar3->fields).LIICCFBEOLC, __this_00 == (MNLIBPAOCLG_o *)0x0))
    goto LAB_034f08dc;
    __this_01 = MNLIBPAOCLG__KLOHNEKNDBL(__this_00,(MethodInfo *)0x0);
    pOVar4 = (BCHKAEBGKGG->fields).HEMGHNOOJPI;
    if ((pOVar4 == (OLKKAIFGGAK_o *)0x0) || (__this_01 == (PKNBJJPHAKI_o *)0x0)) goto LAB_034f08dc;
    PKNBJJPHAKI__PLJOFBGBAMK(__this_01,(pOVar4->fields).HMIAFJALFCJ,true,(MethodInfo *)0x0);
  }
  pMVar5 = (__this->fields).POEGCOJFMDB;
  if ((pMVar5 != (MMDDDDFHOLG_o *)0x0) &&
     (__this_02 = (System_Collections_Generic_Dictionary_object__object__o *)
                  (pMVar5->fields).KECADJKAJNG,
     __this_02 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
    System_Collections_Generic_Dictionary<object,_object>__set_Item
              (__this_02,StringLiteral_7628,(Il2CppObject *)__this_03,
               Method_System_Collections_Generic_Dictionary<string,_object>_set_Item__);
    pMVar5 = (__this->fields).POEGCOJFMDB;
    if (pMVar5 != (MMDDDDFHOLG_o *)0x0) {
      method_00 = (MethodInfo *)0xd;
      MMDDDDFHOLG__CFEOMJALMBB
                (pMVar5,(BCHKAEBGKGG->fields).HEMGHNOOJPI,0xd,true,(NJPBBPOABKP_o *)0x0,
                 (MethodInfo *)0x0);
      FCJBEKHDLAF__NJIFEJCNCHF(__this,__this_03,method_00);
      return;
    }
  }
LAB_034f08dc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

