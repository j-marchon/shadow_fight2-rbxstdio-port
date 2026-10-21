// GBJGJEGPHKD$$KFIBHLNFEHH @ RVA 0x342DCAC

void GBJGJEGPHKD__KFIBHLNFEHH(GBJGJEGPHKD_o *__this,MethodInfo *method)

{
  int iVar1;
  CNDPAJOLKFN_o *pCVar2;
  System_Collections_Generic_List_IEFEBEDLHNN__o *pSVar3;
  Il2CppObject *pIVar4;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *extraout_x1_00;
  IEFEBEDLHNN_o *pIVar5;
  int index;
  float OOGPLJBADCD;
  
  if ((DAT_04568153 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<IEFEBEDLHNN>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IEFEBEDLHNN>_get_Item__);
    DAT_04568153 = 1;
  }
  pCVar2 = (__this->fields).ELBDGPANAAB;
  if (pCVar2 != (CNDPAJOLKFN_o *)0x0) {
    CNDPAJOLKFN__DGLJCGNHLIG(pCVar2,(MethodInfo *)0x0);
    pIVar5 = (__this->fields).ADBBKMDIOKI;
    if ((pIVar5 != (IEFEBEDLHNN_o *)0x0) &&
       (pCVar2 = (__this->fields).MLNGAAOOFHI, pCVar2 != (CNDPAJOLKFN_o *)0x0)) {
      CNDPAJOLKFN__FOOHBJNHOKK(pCVar2,(pIVar5->fields).CNMHHKAMGPI,(MethodInfo *)0x0);
      pSVar3 = GBJGJEGPHKD__IBNCHLIHECC(__this,method_00);
      if (pSVar3 != (System_Collections_Generic_List_IEFEBEDLHNN__o *)0x0) {
        iVar1 = (pSVar3->fields)._size;
        if (0 < iVar1) {
          index = 0;
          method_01 = extraout_x1;
          do {
            pCVar2 = (__this->fields).NMMGENFNPLK;
            pSVar3 = GBJGJEGPHKD__IBNCHLIHECC(__this,method_01);
            if (((pSVar3 == (System_Collections_Generic_List_IEFEBEDLHNN__o *)0x0) ||
                (pIVar4 = System_Collections_Generic_List<object>__get_Item
                                    ((System_Collections_Generic_List_object__o *)pSVar3,index,
                                     Method_System_Collections_Generic_List<IEFEBEDLHNN>_get_Item__)
                , pIVar4 == (Il2CppObject *)0x0)) || (pCVar2 == (CNDPAJOLKFN_o *)0x0))
            goto LAB_0352de14;
            CNDPAJOLKFN__FOOHBJNHOKK(pCVar2,pIVar4[3].monitor,(MethodInfo *)0x0);
            pCVar2 = (__this->fields).NMMGENFNPLK;
            pSVar3 = GBJGJEGPHKD__IBNCHLIHECC(__this,method_02);
            if (((pSVar3 == (System_Collections_Generic_List_IEFEBEDLHNN__o *)0x0) ||
                (pIVar5 = (IEFEBEDLHNN_o *)
                          System_Collections_Generic_List<object>__get_Item
                                    ((System_Collections_Generic_List_object__o *)pSVar3,index,
                                     Method_System_Collections_Generic_List<IEFEBEDLHNN>_get_Item__)
                , pIVar5 == (IEFEBEDLHNN_o *)0x0)) ||
               (OOGPLJBADCD = IEFEBEDLHNN__NODBECJPBDC(pIVar5,(MethodInfo *)0x0),
               pCVar2 == (CNDPAJOLKFN_o *)0x0)) goto LAB_0352de14;
            CNDPAJOLKFN__PGLILPKGILI(pCVar2,OOGPLJBADCD,(MethodInfo *)0x0);
            pCVar2 = (__this->fields).ELBDGPANAAB;
            if (pCVar2 == (CNDPAJOLKFN_o *)0x0) goto LAB_0352de14;
            CNDPAJOLKFN__LFENGGKOJDO(pCVar2,(__this->fields).NMMGENFNPLK,(MethodInfo *)0x0);
            index = index + 1;
            method_01 = extraout_x1_00;
          } while (iVar1 != index);
        }
        pCVar2 = (__this->fields).ELBDGPANAAB;
        if (pCVar2 != (CNDPAJOLKFN_o *)0x0) {
          CNDPAJOLKFN__PGLILPKGILI(pCVar2,1.0 / (__this->fields).GNHFLFKFOIO,(MethodInfo *)0x0);
          pIVar5 = (__this->fields).ADBBKMDIOKI;
          if (pIVar5 != (IEFEBEDLHNN_o *)0x0) {
            IEFEBEDLHNN__AGOEHONIGBH(pIVar5,(__this->fields).ELBDGPANAAB,(MethodInfo *)0x0);
            pIVar5 = (__this->fields).ADBBKMDIOKI;
            if (pIVar5 != (IEFEBEDLHNN_o *)0x0) {
              IEFEBEDLHNN__LCOGNIMMOFL(pIVar5,(__this->fields).MLNGAAOOFHI,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
LAB_0352de14:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

