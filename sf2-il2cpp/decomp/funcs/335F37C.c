// NFNBHPOJFNJ$$BGILDFBAMNI @ RVA 0x335F37C

void NFNBHPOJFNJ__BGILDFBAMNI(NFNBHPOJFNJ_o *__this,MethodInfo *method)

{
  NFNBHPOJFNJ_o *pNVar1;
  MethodInfo *method_00;
  System_String_o *fileName;
  System_IO_FileInfo_o *__this_00;
  ulong uVar2;
  System_IO_StreamReader_o *pSVar3;
  long *plVar4;
  long lVar5;
  System_IO_FileStream_o *pSVar6;
  MethodInfo *method_01;
  MethodInfo *in_x3;
  System_Text_StringBuilder_o *KOANCCDDBDA;
  long lVar7;
  
  pNVar1 = __this;
  if ((DAT_04567a6a & 1) == 0) {
    pNVar1 = (NFNBHPOJFNJ_o *)FUN_01bab630(&System_IO_FileInfo_TypeInfo);
    DAT_04567a6a = 1;
  }
  KOANCCDDBDA = (__this->fields).BEDMFFEAEDI;
  pNVar1 = (NFNBHPOJFNJ_o *)NFNBHPOJFNJ__JOECBAFGPOA((MethodInfo *)pNVar1);
  NFNBHPOJFNJ__GDCHAJOJGBH(pNVar1,KOANCCDDBDA,(System_String_o *)pNVar1,in_x3);
  fileName = NFNBHPOJFNJ__JOECBAFGPOA(method_00);
  __this_00 = (System_IO_FileInfo_o *)thunk_FUN_01bda818(System_IO_FileInfo_TypeInfo);
  System_IO_FileInfo___ctor(__this_00,fileName,(MethodInfo *)0x0);
  if (__this_00 != (System_IO_FileInfo_o *)0x0) {
    uVar2 = (*(__this_00->klass->vtable)._10_get_Exists.methodPtr)
                      (__this_00,(__this_00->klass->vtable)._10_get_Exists.method);
    if ((uVar2 & 1) == 0) {
      return;
    }
    pSVar3 = System_IO_FileInfo__OpenText(__this_00,(MethodInfo *)0x0);
    if (pSVar3 != (System_IO_StreamReader_o *)0x0) {
      lVar7 = (__this->fields).JHPGMIMONIG;
      plVar4 = (long *)(*(pSVar3->klass->vtable)._15_get_BaseStream.methodPtr)
                                 (pSVar3,(pSVar3->klass->vtable)._15_get_BaseStream.method);
      if (plVar4 != (long *)0x0) {
        lVar5 = (**(code **)(*plVar4 + 0x1e8))(plVar4,*(undefined8 *)(*plVar4 + 0x1f0));
        (*(pSVar3->klass->vtable)._7_Close.methodPtr)
                  (pSVar3,(pSVar3->klass->vtable)._7_Close.method);
        if (lVar7 < lVar5) {
          return;
        }
        pSVar6 = System_IO_FileInfo__Create(__this_00,(MethodInfo *)0x0);
        if (pSVar6 != (System_IO_FileStream_o *)0x0) {
          (*(pSVar6->klass->vtable)._19_Close.methodPtr)
                    (pSVar6,(pSVar6->klass->vtable)._19_Close.method);
          (__this->fields).JHPGMIMONIG = 0;
          NFNBHPOJFNJ__KIBAKBEOOJI(__this,method_01);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

