// OPNFCOGALLI$$HFBJGGAJFGK @ RVA 0x3109E50

void OPNFCOGALLI__HFBJGGAJFGK(OPNFCOGALLI_o *__this,MethodInfo *method)

{
  int iVar1;
  GBJGJEGPHKD_o *pGVar2;
  System_Collections_Generic_List_IEFEBEDLHNN__o *__this_00;
  PNGKLCHKPEO_o *pPVar3;
  IEFEBEDLHNN_o *__this_01;
  CNDPAJOLKFN_o *CJNHFNHJHPE;
  ECENNHNBAME_o *pEVar4;
  System_Collections_Generic_List_List_CNDPAJOLKFN___o *pSVar5;
  OLKKAIFGGAK_o *pOVar6;
  int index;
  float fVar7;
  float fVar8;
  float in_s1;
  float fVar9;
  float fVar10;
  UnityEngine_Vector3_o UVar11;
  float local_68;
  float fStack_64;
  
  if ((DAT_04566525 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<List<CNDPAJOLKFN>>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IEFEBEDLHNN>_get_Item__);
    DAT_04566525 = 1;
  }
  pGVar2 = (__this->fields).KOHECBJAFKG;
  if (pGVar2 != (GBJGJEGPHKD_o *)0x0) {
    __this_00 = GBJGJEGPHKD__HMAAHELNECD(pGVar2,(MethodInfo *)0x0);
    pEVar4 = (__this->fields).NDBPNFLAKDL;
    if ((((pEVar4 != (ECENNHNBAME_o *)0x0) &&
         (pGVar2 = (__this->fields).KOHECBJAFKG, pGVar2 != (GBJGJEGPHKD_o *)0x0)) &&
        (pOVar6 = (pGVar2->fields).KOHECBJAFKG, pOVar6 != (OLKKAIFGGAK_o *)0x0)) &&
       (pPVar3 = (pEVar4->fields).JCKNGNJBIIF, pPVar3 != (PNGKLCHKPEO_o *)0x0)) {
      fVar7 = (float)(*(pPVar3->klass->vtable)._7_KILOIOEILFL.methodPtr)
                               (pPVar3,(pOVar6->fields).FNEAAHOOHAA,
                                (pPVar3->klass->vtable)._7_KILOIOEILFL.method);
      pSVar5 = (__this->fields).IFHALHIGBNM;
      if (pSVar5 != (System_Collections_Generic_List_List_CNDPAJOLKFN___o *)0x0) {
        iVar1 = (pSVar5->fields)._size;
        if (0 < iVar1) {
          if (__this_00 == (System_Collections_Generic_List_IEFEBEDLHNN__o *)0x0) goto LAB_03209ffc;
          index = 0;
          do {
            __this_01 = (IEFEBEDLHNN_o *)
                        System_Collections_Generic_List<object>__get_Item
                                  ((System_Collections_Generic_List_object__o *)__this_00,index,
                                   Method_System_Collections_Generic_List<IEFEBEDLHNN>_get_Item__);
            pGVar2 = (__this->fields).KOHECBJAFKG;
            if (pGVar2 == (GBJGJEGPHKD_o *)0x0) goto LAB_03209ffc;
            if ((pGVar2->fields).FJHAMMNKBPN == false) {
              if (__this_01 == (IEFEBEDLHNN_o *)0x0) goto LAB_03209ffc;
LAB_03209f50:
              UVar11 = CNDPAJOLKFN__ALBJPLAPOBO((__this_01->fields).CNMHHKAMGPI,(MethodInfo *)0x0);
              pEVar4 = (__this->fields).NDBPNFLAKDL;
              if (pEVar4 == (ECENNHNBAME_o *)0x0) goto LAB_03209ffc;
              fVar8 = ECENNHNBAME__BMOIBLLELCL(pEVar4,(MethodInfo *)0x0);
              fVar9 = UVar11.fields.x - fVar7;
              fVar10 = UVar11.fields.y - in_s1;
              sincosf(fVar8 * 0.017453292,&fStack_64,&local_68);
              UVar11.fields.y = in_s1 + fVar9 * fStack_64 + fVar10 * local_68;
              UVar11.fields.x = fVar7 + (fVar9 * local_68 - fVar10 * fStack_64);
              UVar11.fields.z = 0.0;
              CJNHFNHJHPE = CNDPAJOLKFN__ALBJPLAPOBO(UVar11,(MethodInfo *)0x0);
              IEFEBEDLHNN__AGOEHONIGBH(__this_01,CJNHFNHJHPE,(MethodInfo *)0x0);
            }
            else {
              if (__this_01 == (IEFEBEDLHNN_o *)0x0) goto LAB_03209ffc;
              if ((__this_01->fields).FJHAMMNKBPN == false) goto LAB_03209f50;
            }
            index = index + 1;
          } while (iVar1 != index);
        }
        return;
      }
    }
  }
LAB_03209ffc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

