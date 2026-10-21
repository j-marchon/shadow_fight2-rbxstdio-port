// KAHMAJKJMBK$$FPNABLENJEN @ RVA 0x34C1A38

void KAHMAJKJMBK__FPNABLENJEN(KAHMAJKJMBK_o *__this,LNMCGOLABEK_o *GOAHBPBJCKC,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  System_Collections_Generic_List_HEFOANCOHDC__o *__this_00;
  System_Object_array *args;
  Il2CppObject *pIVar3;
  long lVar4;
  undefined8 uVar5;
  HEFOANCOHDC_o *item;
  HEFOANCOHDC_array *pHVar6;
  int32_t local_24;
  
  if ((DAT_0456860a & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&HEDFKJBDBFN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>_Add__);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_11467);
    DAT_0456860a = 1;
  }
  lVar4 = Method_System_Collections_Generic_List<HEFOANCOHDC>_Add__;
  if (GOAHBPBJCKC != (LNMCGOLABEK_o *)0x0) {
    iVar1 = (GOAHBPBJCKC->fields).super.JGJNBILDCHK;
    if (iVar1 == 2) {
      __this_00 = (__this->fields).PFFILFBOODM;
    }
    else {
      if (iVar1 != 1) {
        args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
        local_24 = (GOAHBPBJCKC->fields).super.JGJNBILDCHK;
        pIVar3 = (Il2CppObject *)thunk_FUN_01bda448(HEDFKJBDBFN_TypeInfo,&local_24);
        if (args != (System_Object_array *)0x0) {
          if ((pIVar3 != (Il2CppObject *)0x0) &&
             (lVar4 = thunk_FUN_01bda71c(pIVar3,(((args->obj).klass)->_1).element_class), lVar4 == 0
             )) {
            uVar5 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
            FUN_01bab798(uVar5,0);
          }
          if ((int)args->max_length != 0) {
            args->m_Items[0] = pIVar3;
            thunk_FUN_01c20e04(args->m_Items,pIVar3);
                    /* try { // try from 035c1b90 to 036c1d13 has its CatchHandler @ 035c1b90
                       catch() { ... } // from try @ 035c1b90 with catch @ 035c1b90
                       catch() { ... } // from try @ 035c2000 with catch @ 035c1b90
                       catch() { ... } // from try @ 035c2054 with catch @ 035c1b90
                       catch() { ... } // from try @ 035c2128 with catch @ 035c1b90
                       catch() { ... } // from try @ 035c2170 with catch @ 035c1b90
                       catch() { ... } // from try @ 035c21b0 with catch @ 035c1b90 */
            if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            UnityEngine_Debug__LogErrorFormat(StringLiteral_11467,args,(MethodInfo *)0x0);
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
        goto LAB_035c1be8;
      }
      __this_00 = (__this->fields).EOFEIIFFHCN;
    }
    if (__this_00 != (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) {
      item = (GOAHBPBJCKC->fields).LENFGEAJDMN;
      pHVar6 = (__this_00->fields)._items;
      (__this_00->fields)._version = (__this_00->fields)._version + 1;
      if (pHVar6 != (HEFOANCOHDC_array *)0x0) {
        uVar2 = (__this_00->fields)._size;
        if (uVar2 < (uint)pHVar6->max_length) {
          (__this_00->fields)._size = uVar2 + 1;
          pHVar6->m_Items[(int)uVar2] = item;
          thunk_FUN_01c20e04(pHVar6->m_Items + (int)uVar2);
          return;
        }
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)item,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
        return;
      }
    }
  }
LAB_035c1be8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

