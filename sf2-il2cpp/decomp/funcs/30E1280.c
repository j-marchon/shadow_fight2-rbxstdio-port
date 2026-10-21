// PKNBJJPHAKI$$OCJCMHLABBF @ RVA 0x30E1280

int32_t PKNBJJPHAKI__OCJCMHLABBF
                  (PKNBJJPHAKI_o *__this,GBJGJEGPHKD_o *BCKBBGCOMJD,UnityEngine_Color_o EFJKPCADGJH,
                  bool PMIAIAOKFND,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  UnityEngine_GameObject_o *pUVar3;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_Transform_o *parent;
  System_Collections_Generic_List_GBJGJEGPHKD__o *__this_00;
  OLKKAIFGGAK_o *pOVar5;
  GBJGJEGPHKD_array *pGVar6;
  UnityEngine_Vector3_StaticFields *pUVar7;
  GBJGJEGPHKD_o **ppGVar8;
  UnityEngine_Vector3_o UVar9;
  UnityEngine_Vector3_o value;
  
  if ((DAT_045663a3 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<GBJGJEGPHKD>_Add__);
    DAT_045663a3 = 1;
  }
  if (PMIAIAOKFND) {
    ppGVar8 = &(__this->fields).JBPKNAKOHLP;
    if (*ppGVar8 == (GBJGJEGPHKD_o *)0x0) {
      *ppGVar8 = BCKBBGCOMJD;
      thunk_FUN_01c20e04(ppGVar8,BCKBBGCOMJD);
                    /* try { // try from 031e1420 to 032e1683 has its CatchHandler @ 031e1420
                       catch() { ... } // from try @ 031e1420 with catch @ 031e1420
                       catch() { ... } // from try @ 031e1794 with catch @ 031e1420
                       catch() { ... } // from try @ 031e18d8 with catch @ 031e1420
                       catch() { ... } // from try @ 031e18e0 with catch @ 031e1420
                       catch() { ... } // from try @ 031e1990 with catch @ 031e1420 */
      if ((((*ppGVar8 == (GBJGJEGPHKD_o *)0x0) ||
           (pOVar5 = ((*ppGVar8)->fields).KOHECBJAFKG, pOVar5 == (OLKKAIFGGAK_o *)0x0)) ||
          (pUVar3 = (pOVar5->fields).LDAKOINICNJ, pUVar3 == (UnityEngine_GameObject_o *)0x0)) ||
         (pUVar4 = UnityEngine_GameObject__get_transform(pUVar3,(MethodInfo *)0x0),
         pUVar4 == (UnityEngine_Transform_o *)0x0)) goto LAB_031e14ac;
      UVar9 = UnityEngine_Transform__get_position(pUVar4,(MethodInfo *)0x0);
      if (DAT_0455fb9d == '\0') {
        FUN_01bab630(&UnityEngine_Vector3_TypeInfo);
        DAT_0455fb9d = '\x01';
      }
      pUVar7 = UnityEngine_Vector3_TypeInfo->static_fields;
      value.fields.x = UVar9.fields.x - (pUVar7->forwardVector).fields.x * 0.001;
      value.fields.y = UVar9.fields.y - (pUVar7->forwardVector).fields.y * 0.001;
      value.fields.z = UVar9.fields.z - (pUVar7->forwardVector).fields.z * 0.001;
      UnityEngine_Transform__set_position(pUVar4,value,(MethodInfo *)0x0);
    }
    else {
      ppGVar8 = &(__this->fields).AAJIHJPLHDA;
      *ppGVar8 = BCKBBGCOMJD;
      thunk_FUN_01c20e04(ppGVar8,BCKBBGCOMJD);
    }
  }
  if (((BCKBBGCOMJD != (GBJGJEGPHKD_o *)0x0) &&
      (pOVar5 = (BCKBBGCOMJD->fields).KOHECBJAFKG, pOVar5 != (OLKKAIFGGAK_o *)0x0)) &&
     (pUVar3 = (pOVar5->fields).LDAKOINICNJ, pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
    pUVar4 = UnityEngine_GameObject__get_transform(pUVar3,(MethodInfo *)0x0);
    pUVar3 = (__this->fields).LDAKOINICNJ;
    if ((pUVar3 != (UnityEngine_GameObject_o *)0x0) &&
       (parent = UnityEngine_GameObject__get_transform(pUVar3,(MethodInfo *)0x0),
       pUVar4 != (UnityEngine_Transform_o *)0x0)) {
      UnityEngine_Transform__SetParent(pUVar4,parent,false,(MethodInfo *)0x0);
      pOVar5 = (BCKBBGCOMJD->fields).KOHECBJAFKG;
      if (pOVar5 != (OLKKAIFGGAK_o *)0x0) {
        OLKKAIFGGAK__HLCMLOBHLDA(pOVar5,EFJKPCADGJH,false,(MethodInfo *)0x0);
        lVar2 = Method_System_Collections_Generic_List<GBJGJEGPHKD>_Add__;
        __this_00 = (__this->fields).DDOAJGPFCNB;
        if (__this_00 != (System_Collections_Generic_List_GBJGJEGPHKD__o *)0x0) {
          pGVar6 = (__this_00->fields)._items;
          (__this_00->fields)._version = (__this_00->fields)._version + 1;
          if (pGVar6 != (GBJGJEGPHKD_array *)0x0) {
            uVar1 = (__this_00->fields)._size;
            if (uVar1 < (uint)pGVar6->max_length) {
              (__this_00->fields)._size = uVar1 + 1;
              pGVar6->m_Items[(int)uVar1] = BCKBBGCOMJD;
              thunk_FUN_01c20e04(pGVar6->m_Items + (int)uVar1,BCKBBGCOMJD);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)__this_00,
                         (Il2CppObject *)BCKBBGCOMJD,
                         *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70))
              ;
            }
            return 0;
          }
        }
      }
    }
  }
LAB_031e14ac:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

