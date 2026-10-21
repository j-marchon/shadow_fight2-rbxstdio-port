// AKOMJPINHEN$$GJAEDMLMJIK @ RVA 0x308F768

void AKOMJPINHEN__GJAEDMLMJIK
               (AKOMJPINHEN_o *__this,System_String_o *NONPLOOOOAG,int32_t ACCIHBHMFPN,
               bool MPKMGOGPJKJ,MethodInfo *method)

{
  IOHDCPBJGFF_o *__this_00;
  System_String_o **ppSVar1;
  KKLJIDJBFEI_o *__this_01;
  PGICCMFLDPI_o *pPVar2;
  MethodInfo *method_00;
  int64_t iVar3;
  
  method_00 = (MethodInfo *)(ulong)(uint)ACCIHBHMFPN;
  if ((DAT_0456608b & 1) == 0) {
    FUN_01bab630(&IOHDCPBJGFF_TypeInfo);
    DAT_0456608b = 1;
  }
  __this_00 = (IOHDCPBJGFF_o *)thunk_FUN_01bda818(IOHDCPBJGFF_TypeInfo);
  IOHDCPBJGFF___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (IOHDCPBJGFF_o *)0x0) {
    ppSVar1 = &(__this_00->fields).super.ABCHAOKFLGL;
    *ppSVar1 = NONPLOOOOAG;
    thunk_FUN_01c20e04(ppSVar1,NONPLOOOOAG);
    __this_01 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
    if ((__this_01 != (KKLJIDJBFEI_o *)0x0) &&
       (pPVar2 = KKLJIDJBFEI__MPBLBEGCAKP(__this_01,(MethodInfo *)0x0),
       pPVar2 != (PGICCMFLDPI_o *)0x0)) {
      iVar3 = (pPVar2->fields).GDKPGIBMFPA;
      (__this_00->fields).super.MOIGDPBNMNI = ACCIHBHMFPN;
      (__this_00->fields).super.JEFOELMOCEI = MPKMGOGPJKJ;
      (__this_00->fields).super.HCNDEELOKHA = iVar3;
      AKOMJPINHEN__PAKCJFFMNFH(__this,(ODKDFMHHLIP_o *)__this_00,method_00);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

