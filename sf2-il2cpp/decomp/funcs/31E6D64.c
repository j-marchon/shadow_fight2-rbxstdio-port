// PNGKLCHKPEO$$KEAKEIPABPP @ RVA 0x31E6D64

void PNGKLCHKPEO__KEAKEIPABPP
               (PNGKLCHKPEO_o *__this,GBJGJEGPHKD_o *NCNGALIAHJL,bool FOFCAILEKJD,
               IEFEBEDLHNN_o *IIBPJLKGEBP,bool BHKCLMLKLNB,GBJGJEGPHKD_o *CHBJNMMEAPG,
               MethodInfo *method)

{
  long lVar1;
  uint uVar2;
  IEFEBEDLHNN_o **ppIVar3;
  Il2CppObject *pIVar4;
  PNGKLCHKPEO_PLCIDMPOECL_o *__this_00;
  IEFEBEDLHNN_o *pIVar5;
  System_Object_array *pSVar6;
  Il2CppClass *pIVar7;
  System_Collections_Generic_List_object__o *__this_01;
  int index;
  
  if ((DAT_04566d67 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<PNGKLCHKPEO_PLCIDMPOECL>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PNGKLCHKPEO_PLCIDMPOECL>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PNGKLCHKPEO_PLCIDMPOECL>_get_Item__);
    FUN_01bab630(&PNGKLCHKPEO_PLCIDMPOECL_TypeInfo);
    DAT_04566d67 = 1;
  }
  if (BHKCLMLKLNB) {
    lVar1 = 0x48;
    if (!FOFCAILEKJD) {
      lVar1 = 0x50;
    }
    __this_01 = *(System_Collections_Generic_List_object__o **)((long)&__this->klass + lVar1);
    if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_032e6f50;
    if (0 < (__this_01->fields)._size) {
      index = 0;
      do {
        pIVar4 = System_Collections_Generic_List<object>__get_Item
                           (__this_01,index,
                            Method_System_Collections_Generic_List<PNGKLCHKPEO_PLCIDMPOECL>_get_Item__
                           );
        if (pIVar4 == (Il2CppObject *)0x0) goto LAB_032e6f50;
        if (pIVar4[1].monitor == CHBJNMMEAPG) {
          pIVar4 = System_Collections_Generic_List<object>__get_Item
                             (__this_01,index,
                              Method_System_Collections_Generic_List<PNGKLCHKPEO_PLCIDMPOECL>_get_Item__
                             );
          if (pIVar4 == (Il2CppObject *)0x0) goto LAB_032e6f50;
          pIVar4 = pIVar4 + 1;
          goto LAB_032e6ef0;
        }
        index = index + 1;
      } while (index < (__this_01->fields)._size);
    }
    __this_00 = (PNGKLCHKPEO_PLCIDMPOECL_o *)thunk_FUN_01bda818(PNGKLCHKPEO_PLCIDMPOECL_TypeInfo);
    PNGKLCHKPEO_PLCIDMPOECL___ctor(__this_00,CHBJNMMEAPG,(MethodInfo *)0x0);
    lVar1 = Method_System_Collections_Generic_List<PNGKLCHKPEO_PLCIDMPOECL>_Add__;
    pSVar6 = (__this_01->fields)._items;
    (__this_01->fields)._version = (__this_01->fields)._version + 1;
    if (pSVar6 == (System_Object_array *)0x0) goto LAB_032e6f50;
    uVar2 = (__this_01->fields)._size;
    if (uVar2 < (uint)pSVar6->max_length) {
      (__this_01->fields)._size = uVar2 + 1;
      pSVar6->m_Items[(int)uVar2] = (Il2CppObject *)__this_00;
      thunk_FUN_01c20e04(pSVar6->m_Items + (int)uVar2,__this_00);
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                (__this_01,(Il2CppObject *)__this_00,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar1 + 0x20) + 0xc0) + 0x70));
    }
    if (__this_00 == (PNGKLCHKPEO_PLCIDMPOECL_o *)0x0) goto LAB_032e6f50;
    pIVar4 = (Il2CppObject *)&__this_00->fields;
  }
  else {
    pIVar4 = (Il2CppObject *)&(__this->fields).BEMCNJHEADJ;
    if (!FOFCAILEKJD) {
      pIVar4 = (Il2CppObject *)&(__this->fields).JPJMGEPBOOP;
    }
  }
LAB_032e6ef0:
  pIVar7 = pIVar4->klass;
  if ((__this->fields).AKBDFFLEINL == 1) {
    if ((NCNGALIAHJL == (GBJGJEGPHKD_o *)0x0) ||
       (pIVar5 = GBJGJEGPHKD__OCJAHBKIFNO
                           (NCNGALIAHJL,(__this->fields).HLMDCHDDELG,(MethodInfo *)0x0),
       pIVar7 == (Il2CppClass *)0x0)) {
LAB_032e6f50:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    ((PNGKLCHKPEO_LGAFLKDKBPL_Fields *)&(pIVar7->_1).name)->JHFENACKNPG = pIVar5;
    thunk_FUN_01c20e04();
  }
  else if (pIVar7 == (Il2CppClass *)0x0) goto LAB_032e6f50;
  ppIVar3 = (IEFEBEDLHNN_o **)&(pIVar7->_1).namespaze;
  *ppIVar3 = IIBPJLKGEBP;
  thunk_FUN_01c20e04(ppIVar3,IIBPJLKGEBP);
  return;
}

