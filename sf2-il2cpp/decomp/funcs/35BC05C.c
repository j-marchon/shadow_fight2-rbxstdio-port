// LCAOAAFEOAG$$JFONIHNIHGG @ RVA 0x35BC05C

void LCAOAAFEOAG__JFONIHNIHGG(LCAOAAFEOAG_o *__this,int32_t BDICLGNGCNA,MethodInfo *method)

{
  System_Byte_array *pSVar1;
  System_Byte_array *pSVar2;
  System_String_o *pSVar3;
  System_String_o *arg0;
  Il2CppObject *arg1;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  int32_t local_54;
  
  if ((DAT_04568ee0 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6601);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6602);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6603);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6604);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_GOCLIOIANDK<GGLDGAAPKCF,_ODEIOKOJGDM>_AIHNLLGNBLC__);
    FUN_01bab630(&MPAKDCNMLEG_TypeInfo);
    FUN_01bab630(&ODEIOKOJGDM_TypeInfo);
    DAT_04568ee0 = 1;
  }
  pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar1,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6601,(MethodInfo *)0x0);
  pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar2,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6602,(MethodInfo *)0x0);
  pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
  pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar1,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6603,(MethodInfo *)0x0);
  pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar2,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6604,(MethodInfo *)0x0);
  arg0 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
  local_54 = BDICLGNGCNA;
  arg1 = (Il2CppObject *)thunk_FUN_01bda448(MPAKDCNMLEG_TypeInfo,&local_54);
  pSVar3 = System_String__Format(pSVar3,(Il2CppObject *)arg0,arg1,(MethodInfo *)0x0);
  KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,pSVar3,(MethodInfo *)0x0);
  lVar4 = *(long *)(Method_GOCLIOIANDK<GGLDGAAPKCF,_ODEIOKOJGDM>_AIHNLLGNBLC__ + 0x20);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01b81620();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01b81620();
  }
  plVar8 = (long *)**(undefined8 **)(lVar4 + 0xb8);
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  lVar4 = *plVar8;
  uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(ODEIOKOJGDM_c **)(piVar7 + -2) == ODEIOKOJGDM_TypeInfo) {
        puVar5 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_036bc280;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar5 = (undefined8 *)FUN_01b81914(plVar8,ODEIOKOJGDM_TypeInfo,0);
LAB_036bc280:
  (*(code *)*puVar5)(plVar8,0,puVar5[1]);
  return;
}

