// KAHMAJKJMBK$$MAHDPEFBCOJ @ RVA 0x34C290C

void KAHMAJKJMBK__MAHDPEFBCOJ(KAHMAJKJMBK_o *__this,CCAEOJMALLA_o *GOAHBPBJCKC,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  System_Collections_Generic_List_CCAEOJMALLA__o *pSVar3;
  System_Object_array *args;
  Il2CppObject *pIVar4;
  long lVar5;
  undefined8 uVar6;
  CCAEOJMALLA_array *pCVar7;
  int32_t iVar8;
  int32_t local_24;
  
  if ((DAT_0456861d & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&HEDFKJBDBFN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<CCAEOJMALLA>_Add__);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_11467);
    DAT_0456861d = 1;
  }
  lVar5 = Method_System_Collections_Generic_List<CCAEOJMALLA>_Add__;
  if (GOAHBPBJCKC == (CCAEOJMALLA_o *)0x0) goto LAB_035c2b4c;
  iVar1 = (GOAHBPBJCKC->fields).super.JGJNBILDCHK;
  if (iVar1 == 3) {
    pSVar3 = (__this->fields).JJPFOPGHLOD;
    if (pSVar3 == (System_Collections_Generic_List_CCAEOJMALLA__o *)0x0) goto LAB_035c2b4c;
    pCVar7 = (pSVar3->fields)._items;
    (pSVar3->fields)._version = (pSVar3->fields)._version + 1;
    if (pCVar7 == (CCAEOJMALLA_array *)0x0) goto LAB_035c2b4c;
    uVar2 = (pSVar3->fields)._size;
    if (uVar2 < (uint)pCVar7->max_length) {
      (pSVar3->fields)._size = uVar2 + 1;
      pCVar7->m_Items[(int)uVar2] = GOAHBPBJCKC;
      thunk_FUN_01c20e04(pCVar7->m_Items + (int)uVar2,GOAHBPBJCKC);
    }
    else {
                    /* try { // try from 035c2ac0 to 036c2ac7 has its CatchHandler @ 035c2b60 */
                    /* try { // try from 035c2ac8 to 036c2b57 has its CatchHandler @ 035c28e0 */
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)GOAHBPBJCKC,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
    }
    pSVar3 = (__this->fields).OHDBJEGKGLL;
    if (pSVar3 == (System_Collections_Generic_List_CCAEOJMALLA__o *)0x0) goto LAB_035c2b4c;
    iVar8 = (pSVar3->fields)._version;
    pCVar7 = (pSVar3->fields)._items;
  }
  else {
    if (iVar1 == 2) {
      pSVar3 = (__this->fields).OHDBJEGKGLL;
    }
    else {
      if (iVar1 != 1) {
        args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
        local_24 = (GOAHBPBJCKC->fields).super.JGJNBILDCHK;
        pIVar4 = (Il2CppObject *)thunk_FUN_01bda448(HEDFKJBDBFN_TypeInfo,&local_24);
        if (args != (System_Object_array *)0x0) {
          if ((pIVar4 != (Il2CppObject *)0x0) &&
             (lVar5 = thunk_FUN_01bda71c(pIVar4,(((args->obj).klass)->_1).element_class), lVar5 == 0
             )) {
            uVar6 = thunk_FUN_01be8e1c();
                    /* try { // try from 035c2b58 to 036c2b5b has its CatchHandler @ 035c2b5c */
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035c2b58 with catch @ 035c2b5c
                       try { // try from 035c2b5c to 036c2b87 has its CatchHandler @ 035c28e0 */
            FUN_01bab798(uVar6,0);
          }
          if ((int)args->max_length != 0) {
            args->m_Items[0] = pIVar4;
            thunk_FUN_01c20e04(args->m_Items,pIVar4);
                    /* try { // try from 035c2a90 to 036c2a97 has its CatchHandler @ 035c2b70 */
            if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
                    /* try { // try from 035c2aac to 036c2ab7 has its CatchHandler @ 035c2b6c */
            UnityEngine_Debug__LogErrorFormat(StringLiteral_11467,args,(MethodInfo *)0x0);
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
        goto LAB_035c2b4c;
      }
      pSVar3 = (__this->fields).JJPFOPGHLOD;
    }
    if (pSVar3 == (System_Collections_Generic_List_CCAEOJMALLA__o *)0x0) goto LAB_035c2b4c;
    iVar8 = (pSVar3->fields)._version;
    pCVar7 = (pSVar3->fields)._items;
  }
  lVar5 = Method_System_Collections_Generic_List<CCAEOJMALLA>_Add__;
  (pSVar3->fields)._version = iVar8 + 1;
  if (pCVar7 != (CCAEOJMALLA_array *)0x0) {
    uVar2 = (pSVar3->fields)._size;
    if (uVar2 < (uint)pCVar7->max_length) {
      (pSVar3->fields)._size = uVar2 + 1;
      pCVar7->m_Items[(int)uVar2] = GOAHBPBJCKC;
      thunk_FUN_01c20e04(pCVar7->m_Items + (int)uVar2,GOAHBPBJCKC);
      return;
    }
    System_Collections_Generic_List<object>__AddWithResize
              ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)GOAHBPBJCKC,
               *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
    return;
  }
LAB_035c2b4c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

