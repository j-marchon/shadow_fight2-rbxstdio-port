// MCCHIAKPFEL$$.ctor @ RVA 0x318CF50

/* WARNING: Removing unreachable block (ram,0x0328d384) */

void MCCHIAKPFEL___ctor(MCCHIAKPFEL_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,uint16_t JDIHKNKFJMK
                       ,uint16_t EHEFEIEKHJO,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  int32_t iVar3;
  JHBHHHKEFOO_o *pJVar4;
  System_Collections_Generic_List_OIBMPFJDKGO__o *pSVar5;
  System_Xml_XmlNodeList_o *pSVar6;
  long *plVar7;
  undefined8 *puVar8;
  System_Xml_XmlNode_o *AHDGNOJPPIB_00;
  OIBMPFJDKGO_o *__this_00;
  MGNDHCBAPEN_int__int__o *pMVar9;
  long lVar10;
  OIBMPFJDKGO_array *pOVar11;
  ulong uVar12;
  int *piVar13;
  System_Collections_Generic_List_OIBMPFJDKGO__o **ppSVar14;
  MCCHIAKPFEL_Fields *pMVar15;
  OIBMPFJDKGO_Fields *pOVar16;
  
  if ((DAT_04566a18 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&JHBHHHKEFOO_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<OIBMPFJDKGO>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OIBMPFJDKGO>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<OIBMPFJDKGO>_TypeInfo);
    FUN_01bab630(&OIBMPFJDKGO_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_8409);
    DAT_04566a18 = 1;
  }
  pJVar4 = (JHBHHHKEFOO_o *)thunk_FUN_01bda818(JHBHHHKEFOO_TypeInfo);
  JHBHHHKEFOO___ctor(pJVar4,(MethodInfo *)0x0);
  pMVar15 = &__this->fields;
  pMVar15->LNONNMPONFN = pJVar4;
  thunk_FUN_01c20e04(pMVar15,pJVar4);
  pSVar5 = (System_Collections_Generic_List_OIBMPFJDKGO__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<OIBMPFJDKGO>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar5,
             Method_System_Collections_Generic_List<OIBMPFJDKGO>__ctor__);
  ppSVar14 = &(__this->fields).PADLGGFCCMI;
  *ppSVar14 = pSVar5;
  thunk_FUN_01c20e04(ppSVar14,pSVar5);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (((pMVar15->LNONNMPONFN == (JHBHHHKEFOO_o *)0x0) ||
      (JHBHHHKEFOO__HNIHOIAMDPC
                 (pMVar15->LNONNMPONFN,AHDGNOJPPIB,JDIHKNKFJMK,EHEFEIEKHJO,(MethodInfo *)0x0),
      AHDGNOJPPIB == (System_Xml_XmlNode_o *)0x0)) ||
     (pSVar6 = System_Xml_XmlNode__SelectNodes(AHDGNOJPPIB,StringLiteral_8409,(MethodInfo *)0x0),
     pSVar6 == (System_Xml_XmlNodeList_o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  plVar7 = (long *)(*(pSVar6->klass->vtable)._8_GetEnumerator.methodPtr)
                             (pSVar6,(pSVar6->klass->vtable)._8_GetEnumerator.method);
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  do {
    lVar10 = *plVar7;
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar13 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar8 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_0328d120;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar8 = (undefined8 *)FUN_01b81914(plVar7,System_Collections_IEnumerator_TypeInfo,0);
LAB_0328d120:
    uVar12 = (*(code *)*puVar8)(plVar7,puVar8[1]);
    if ((uVar12 & 1) == 0) {
      plVar7 = (long *)thunk_FUN_01bda71c(plVar7,System_IDisposable_TypeInfo);
      if (plVar7 == (long *)0x0) {
        return;
      }
      lVar10 = *plVar7;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar12 == 0) goto LAB_0328d314;
      piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      break;
    }
    lVar10 = *plVar7;
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar13 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar8 = (undefined8 *)(lVar10 + (long)(*piVar13 + 1) * 0x10 + 0x138);
          goto LAB_0328d180;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar8 = (undefined8 *)FUN_01b81914(plVar7,System_Collections_IEnumerator_TypeInfo,1);
LAB_0328d180:
    AHDGNOJPPIB_00 = (System_Xml_XmlNode_o *)(*(code *)*puVar8)(plVar7,puVar8[1]);
    if (AHDGNOJPPIB_00 != (System_Xml_XmlNode_o *)0x0) {
      bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
      if (((AHDGNOJPPIB_00->klass->_2).naturalAligment < bVar1) ||
         ((AHDGNOJPPIB_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(AHDGNOJPPIB_00);
      }
    }
    __this_00 = (OIBMPFJDKGO_o *)thunk_FUN_01bda818(OIBMPFJDKGO_TypeInfo);
    OIBMPFJDKGO___ctor(__this_00,(MethodInfo *)0x0);
    pJVar4 = (JHBHHHKEFOO_o *)thunk_FUN_01bda818(JHBHHHKEFOO_TypeInfo);
    JHBHHHKEFOO___ctor(pJVar4,(MethodInfo *)0x0);
    if (__this_00 == (OIBMPFJDKGO_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pOVar16 = &__this_00->fields;
    pOVar16->NNHNNAKKKPL = pJVar4;
    thunk_FUN_01c20e04(pOVar16,pJVar4);
    if (pOVar16->NNHNNAKKKPL == (JHBHHHKEFOO_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    JHBHHHKEFOO__HNIHOIAMDPC
              (pOVar16->NNHNNAKKKPL,AHDGNOJPPIB_00,JDIHKNKFJMK,EHEFEIEKHJO,(MethodInfo *)0x0);
    pMVar9 = GIAMPEGMNHE__GGPIBJJKMPK(AHDGNOJPPIB_00,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
    if (pMVar9 == (MGNDHCBAPEN_int__int__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    iVar3 = (pMVar9->fields).DOKHHBGJICA;
    pJVar4 = (__this_00->fields).NNHNNAKKKPL;
    (__this_00->fields).FDIGKDNAJJF = (pMVar9->fields).PHPELPFMOII;
    (__this_00->fields).FDGAGHPHOAF = iVar3;
    if (pJVar4 == (JHBHHHKEFOO_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    (pJVar4->fields).GICDEKDNADC = true;
    lVar10 = Method_System_Collections_Generic_List<OIBMPFJDKGO>_Add__;
    pSVar5 = *ppSVar14;
    if (pSVar5 == (System_Collections_Generic_List_OIBMPFJDKGO__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pOVar11 = (pSVar5->fields)._items;
    (pSVar5->fields)._version = (pSVar5->fields)._version + 1;
    if (pOVar11 == (OIBMPFJDKGO_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    uVar2 = (pSVar5->fields)._size;
    if (uVar2 < (uint)pOVar11->max_length) {
      (pSVar5->fields)._size = uVar2 + 1;
      pOVar11->m_Items[(int)uVar2] = __this_00;
      thunk_FUN_01c20e04(pOVar11->m_Items + (int)uVar2,__this_00);
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar5,(Il2CppObject *)__this_00,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
    }
  } while( true );
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
    if (*(System_IDisposable_c **)(piVar13 + -2) == System_IDisposable_TypeInfo) {
      puVar8 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_0328d330;
    }
  }
LAB_0328d314:
  puVar8 = (undefined8 *)FUN_01b81914(plVar7,System_IDisposable_TypeInfo,0);
LAB_0328d330:
  (*(code *)*puVar8)(plVar7,puVar8[1]);
  return;
}

