// FCJBEKHDLAF$$LKGKDIMGDHL @ RVA 0x33F43CC

void FCJBEKHDLAF__LKGKDIMGDHL
               (FCJBEKHDLAF_o *__this,OLKKAIFGGAK_EAOIGPODIAI_o *BCHKAEBGKGG,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  OLKKAIFGGAK_o *__this_01;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  Il2CppObject *value;
  MethodInfo *pMVar3;
  int32_t iVar4;
  MMDDDDFHOLG_o *pMVar5;
  AFFHKININGD_o *pAVar6;
  OLKKAIFGGAK_o *__this_02;
  
                    /* try { // try from 034f43d4 to 035f43db has its CatchHandler @ 034f4a9c */
  if ((DAT_04567f3e & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_object>_set_Item__);
                    /* try { // try from 034f43fc to 035f4403 has its CatchHandler @ 034f4a90 */
    FUN_01bab630(&ECENNHNBAME_TypeInfo);
                    /* try { // try from 034f4404 to 035f440b has its CatchHandler @ 034f4a94 */
    FUN_01bab630(&StringLiteral_2968);
    DAT_04567f3e = 1;
  }
  if (BCHKAEBGKGG != (OLKKAIFGGAK_EAOIGPODIAI_o *)0x0) {
    value = (BCHKAEBGKGG->fields).KOANCCDDBDA;
                    /* try { // try from 034f441c to 035f4427 has its CatchHandler @ 034f49d0 */
    if (value != (Il2CppObject *)0x0) {
      bVar1 = (ECENNHNBAME_TypeInfo->_2).naturalAligment;
                    /* try { // try from 034f4448 to 035f444f has its CatchHandler @ 034f497c */
                    /* try { // try from 034f4450 to 035f4457 has its CatchHandler @ 034f49c0 */
      if (((value->klass->_2).naturalAligment < bVar1) ||
         ((value->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)ECENNHNBAME_TypeInfo)
         ) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(value);
      }
    }
    pMVar5 = (__this->fields).POEGCOJFMDB;
    if ((pMVar5 != (MMDDDDFHOLG_o *)0x0) &&
       (__this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                    (pMVar5->fields).KECADJKAJNG,
       __this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
                    /* try { // try from 034f4478 to 035f447f has its CatchHandler @ 034f49c4 */
      System_Collections_Generic_Dictionary<object,_object>__set_Item
                (__this_00,StringLiteral_2968,value,
                 Method_System_Collections_Generic_Dictionary<string,_object>_set_Item__);
      pMVar5 = (__this->fields).POEGCOJFMDB;
      if (pMVar5 != (MMDDDDFHOLG_o *)0x0) {
        pMVar3 = (MethodInfo *)0xa;
                    /* try { // try from 034f4498 to 035f449f has its CatchHandler @ 034f4910 */
        MMDDDDFHOLG__CFEOMJALMBB
                  (pMVar5,(BCHKAEBGKGG->fields).HEMGHNOOJPI,10,true,(NJPBBPOABKP_o *)0x0,
                   (MethodInfo *)0x0);
        __this_01 = (BCHKAEBGKGG->fields).HEMGHNOOJPI;
        if (__this_01 != (OLKKAIFGGAK_o *)0x0) {
          __this_02 = (__this_01->fields).BPJMMBGIMNC;
          bVar2 = OLKKAIFGGAK__EFKCFGEEJAC(__this_01,(MethodInfo *)0x0);
          if ((__this_02 != (OLKKAIFGGAK_o *)0x0) && (bVar2)) {
                    /* try { // try from 034f44c4 to 035f44c7 has its CatchHandler @ 034f48f8 */
            bVar2 = OLKKAIFGGAK__EFKCFGEEJAC(__this_02,(MethodInfo *)0x0);
            iVar4 = (__this->fields).PEELENPNLHJ;
                    /* try { // try from 034f44d0 to 035f44f3 has its CatchHandler @ 034f48fc */
            if ((iVar4 == 1) && (bVar2)) {
              FCJBEKHDLAF__NJBMJPGMKDI(__this,method_00);
              pAVar6 = (__this->fields).FBFPLEFCDOK;
              if (pAVar6 == (AFFHKININGD_o *)0x0) goto LAB_034f4544;
              if ((pAVar6->fields).JDNKKGPNHPB == 0) {
                FCJBEKHDLAF__KENPEBLGMIN(__this,2,pMVar3);
                pMVar3 = extraout_x1_00;
              }
              else {
                FCJBEKHDLAF__EEGOPNGLBMJ(__this,method_01);
                pMVar3 = extraout_x1;
              }
                    /* try { // try from 034f4518 to 035f451f has its CatchHandler @ 034f48e8 */
              if (!bVar2) {
                return;
              }
              iVar4 = (__this->fields).PEELENPNLHJ;
            }
            else {
              pMVar3 = method_00;
              if (!bVar2) {
                return;
              }
            }
            if (iVar4 == 3) {
              FCJBEKHDLAF__NJBMJPGMKDI(__this,pMVar3);
              (__this->fields).DFMCHFJOPIP = true;
            }
          }
                    /* try { // try from 034f4538 to 035f453f has its CatchHandler @ 034f4a3c */
          return;
        }
      }
    }
  }
LAB_034f4544:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

