// AFDHGAMMHEC$$.ctor @ RVA 0x31E3160

/* WARNING: Removing unreachable block (ram,0x032e3430) */

void AFDHGAMMHEC___ctor(AFDHGAMMHEC_o *__this,System_Byte_array *IMMNELPBGIF,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_IO_MemoryStream_o *pSVar4;
  Ionic_Zip_ZipFile_o *pIVar5;
  System_Collections_Generic_IEnumerator_ZipEntry__o *pSVar6;
  VirtualInvokeData *pVVar7;
  Il2CppObject *value;
  System_Collections_Generic_IEnumerator_ZipEntry__c *pSVar8;
  ulong uVar9;
  int32_t *piVar10;
  Ionic_Zip_ZipFile_o **ppIVar11;
  AFDHGAMMHEC_Fields *pAVar12;
  System_IO_MemoryStream_o **ppSVar13;
  
  if ((DAT_04566d52 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_ZipEntry>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_ZipEntry>_set_Item__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_ZipEntry>_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<ZipEntry>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&System_IO_MemoryStream_TypeInfo);
    FUN_01bab630(&Ionic_Zip_ZipFile_TypeInfo);
    DAT_04566d52 = 1;
  }
  LDBDCAICCPP___ctor((LDBDCAICCPP_o *)__this,(MethodInfo *)0x0);
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_Dictionary<string,_ZipEntry>_TypeInfo);
  System_Collections_Generic_Dictionary<object,_object>___ctor
            (__this_00,Method_System_Collections_Generic_Dictionary<string,_ZipEntry>__ctor__);
  pAVar12 = &__this->fields;
  pAVar12->LLNLJDIGKDA = (System_Collections_Generic_Dictionary_string__ZipEntry__o *)__this_00;
  thunk_FUN_01c20e04(pAVar12,__this_00);
  pSVar4 = (System_IO_MemoryStream_o *)thunk_FUN_01bda818(System_IO_MemoryStream_TypeInfo);
  System_IO_MemoryStream___ctor(pSVar4,IMMNELPBGIF,(MethodInfo *)0x0);
  ppSVar13 = &(__this->fields).IHCDIHOCPMI;
  *ppSVar13 = pSVar4;
  thunk_FUN_01c20e04(ppSVar13,pSVar4);
  pSVar4 = *ppSVar13;
  if ((Ionic_Zip_ZipFile_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pIVar5 = Ionic_Zip_ZipFile__Read((System_IO_Stream_o *)pSVar4,(MethodInfo *)0x0);
  ppIVar11 = &(__this->fields).DHAMIKMBDEE;
  *ppIVar11 = pIVar5;
  thunk_FUN_01c20e04(ppIVar11,pIVar5);
  if (*ppIVar11 == (Ionic_Zip_ZipFile_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pSVar6 = Ionic_Zip_ZipFile__GetEnumerator(*ppIVar11,(MethodInfo *)0x0);
  if (pSVar6 == (System_Collections_Generic_IEnumerator_ZipEntry__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  do {
    pSVar8 = pSVar6->klass;
    uVar1._0_1_ = (pSVar8->_2).rank;
    uVar1._1_1_ = (pSVar8->_2).minimumAlignment;
    uVar9 = (ulong)uVar1;
    if (uVar9 != 0) {
      piVar10 = &((pSVar8->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
            (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
          pVVar7 = pSVar8->vtable + *piVar10;
          goto LAB_032e3320;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    pVVar7 = (VirtualInvokeData *)FUN_01b81914(pSVar6,System_Collections_IEnumerator_TypeInfo,0);
LAB_032e3320:
    uVar9 = (*pVVar7->methodPtr)(pSVar6,pVVar7->method);
    if ((uVar9 & 1) == 0) {
      if (pSVar6 == (System_Collections_Generic_IEnumerator_ZipEntry__o *)0x0) {
        return;
      }
      pSVar8 = pSVar6->klass;
      uVar3._0_1_ = (pSVar8->_2).rank;
      uVar3._1_1_ = (pSVar8->_2).minimumAlignment;
      uVar9 = (ulong)uVar3;
      if (uVar9 == 0) goto LAB_032e33e0;
      piVar10 = &((pSVar8->_1).interfaceOffsets)->offset;
      break;
    }
    pSVar8 = pSVar6->klass;
    uVar2._0_1_ = (pSVar8->_2).rank;
    uVar2._1_1_ = (pSVar8->_2).minimumAlignment;
    uVar9 = (ulong)uVar2;
    if (uVar9 != 0) {
      piVar10 = &((pSVar8->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
            (Il2CppClass *)System_Collections_Generic_IEnumerator<ZipEntry>_TypeInfo) {
          pVVar7 = pSVar8->vtable + *piVar10;
          goto LAB_032e337c;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    pVVar7 = (VirtualInvokeData *)
             FUN_01b81914(pSVar6,System_Collections_Generic_IEnumerator<ZipEntry>_TypeInfo,0);
LAB_032e337c:
    value = (Il2CppObject *)(*pVVar7->methodPtr)(pSVar6,pVVar7->method);
    if (value == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if ((System_Collections_Generic_Dictionary_object__object__o *)pAVar12->LLNLJDIGKDA ==
        (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    System_Collections_Generic_Dictionary<object,_object>__set_Item
              ((System_Collections_Generic_Dictionary_object__object__o *)pAVar12->LLNLJDIGKDA,
               value[7].monitor,value,
               Method_System_Collections_Generic_Dictionary<string,_ZipEntry>_set_Item__);
  } while( true );
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
    if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
        (Il2CppClass *)System_IDisposable_TypeInfo) {
      pVVar7 = pSVar8->vtable + *piVar10;
      goto LAB_032e33fc;
    }
  }
LAB_032e33e0:
  pVVar7 = (VirtualInvokeData *)FUN_01b81914(pSVar6,System_IDisposable_TypeInfo,0);
LAB_032e33fc:
  (*pVVar7->methodPtr)(pSVar6,pVVar7->method);
  return;
}

