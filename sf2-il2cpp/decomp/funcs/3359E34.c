// NFNBHPOJFNJ$$KLNMLOOCAAO @ RVA 0x3359E34

void NFNBHPOJFNJ__KLNMLOOCAAO
               (NFNBHPOJFNJ_o *__this,System_String_o *DNOPBOLEJBC,int64_t *KDHGNFFLHGO,
               System_Action_bool__string__object__string__o *GFNABKGEGJA,int32_t CPFIPHMGNHI,
               bool KDFKHKKJKCK,System_String_o *CPECAEHDDDB,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  NFNBHPOJFNJ_OPBPGNMEMPB_o *__this_00;
  System_IO_FileInfo_o *__this_01;
  ulong uVar3;
  System_Text_StringBuilder_o *__this_02;
  System_IO_StreamReader_o *__this_03;
  long *plVar4;
  System_String_o *pSVar5;
  int64_t iVar6;
  Core_Network_ServerProvider_o *__this_04;
  System_Action_bool__string__object__o *GFNABKGEGJA_00;
  MethodInfo *method_00;
  System_Action_bool__string__object__string__o *pSVar7;
  System_String_o **ppSVar8;
  NFNBHPOJFNJ_OPBPGNMEMPB_Fields *pNVar9;
  
  if ((DAT_04567a55 & 1) == 0) {
    FUN_01bab630(&System_Action<bool,_string,_object>_TypeInfo);
    FUN_01bab630(&System_IO_FileInfo_TypeInfo);
    FUN_01bab630(&Method_NFNBHPOJFNJ_OPBPGNMEMPB_APBOPKDOCJP__);
    FUN_01bab630(&NFNBHPOJFNJ_OPBPGNMEMPB_TypeInfo);
    FUN_01bab630(&System_Text_StringBuilder_TypeInfo);
    FUN_01bab630(&StringLiteral_47);
    DAT_04567a55 = 1;
  }
  __this_00 = (NFNBHPOJFNJ_OPBPGNMEMPB_o *)thunk_FUN_01bda818(NFNBHPOJFNJ_OPBPGNMEMPB_TypeInfo);
  NFNBHPOJFNJ_OPBPGNMEMPB___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (NFNBHPOJFNJ_OPBPGNMEMPB_o *)0x0) {
    pNVar9 = &__this_00->fields;
    pNVar9->p_delegate = GFNABKGEGJA;
    thunk_FUN_01c20e04(pNVar9,GFNABKGEGJA);
    __this_01 = (System_IO_FileInfo_o *)thunk_FUN_01bda818(System_IO_FileInfo_TypeInfo);
    System_IO_FileInfo___ctor(__this_01,DNOPBOLEJBC,(MethodInfo *)0x0);
    if (__this_01 != (System_IO_FileInfo_o *)0x0) {
      uVar3 = (*(__this_01->klass->vtable)._10_get_Exists.methodPtr)
                        (__this_01,(__this_01->klass->vtable)._10_get_Exists.method);
      if ((uVar3 & 1) == 0) {
        return;
      }
      __this_02 = (System_Text_StringBuilder_o *)
                  thunk_FUN_01bda818(System_Text_StringBuilder_TypeInfo);
      System_Text_StringBuilder___ctor(__this_02,(MethodInfo *)0x0);
      __this_03 = System_IO_FileInfo__OpenText(__this_01,(MethodInfo *)0x0);
      if (__this_03 == (System_IO_StreamReader_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      plVar4 = (long *)(*(__this_03->klass->vtable)._15_get_BaseStream.methodPtr)
                                 (__this_03,(__this_03->klass->vtable)._15_get_BaseStream.method);
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      (**(code **)(*plVar4 + 0x328))(plVar4,*KDHGNFFLHGO,0,*(undefined8 *)(*plVar4 + 0x330));
      if (__this_02 == (System_Text_StringBuilder_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      while ((iVar2 = System_Text_StringBuilder__get_Length(__this_02,(MethodInfo *)0x0),
             iVar2 < CPFIPHMGNHI &&
             (bVar1 = System_IO_StreamReader__get_EndOfStream(__this_03,(MethodInfo *)0x0), !bVar1))
            ) {
        pSVar5 = (System_String_o *)
                 (*(__this_03->klass->vtable)._13_ReadLine.methodPtr)
                           (__this_03,(__this_03->klass->vtable)._13_ReadLine.method);
        System_Text_StringBuilder__Append(__this_02,pSVar5,(MethodInfo *)0x0);
        System_Text_StringBuilder__Append(__this_02,StringLiteral_47,(MethodInfo *)0x0);
      }
      plVar4 = (long *)(*(__this_03->klass->vtable)._15_get_BaseStream.methodPtr)
                                 (__this_03,(__this_03->klass->vtable)._15_get_BaseStream.method);
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      iVar6 = (**(code **)(*plVar4 + 0x1f8))(plVar4,*(undefined8 *)(*plVar4 + 0x200));
      *KDHGNFFLHGO = iVar6;
      (*(__this_03->klass->vtable)._7_Close.methodPtr)
                (__this_03,(__this_03->klass->vtable)._7_Close.method);
      if (KDFKHKKJKCK) {
        NFNBHPOJFNJ__KIBAKBEOOJI(__this,method_00);
      }
      if (__this_02 != (System_Text_StringBuilder_o *)0x0) {
        iVar2 = System_Text_StringBuilder__get_Length(__this_02,(MethodInfo *)0x0);
        if (iVar2 == 0) {
          pSVar7 = pNVar9->p_delegate;
          if (pSVar7 != (System_Action_bool__string__object__string__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0345a140. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)(pSVar7->fields).super.super.invoke_impl)
                      ((pSVar7->fields).super.super.method_code,0,0,0,0,
                       (pSVar7->fields).super.super.method);
            return;
          }
        }
        else {
          pSVar5 = (System_String_o *)
                   (*(__this_02->klass->vtable)._3_ToString.methodPtr)
                             (__this_02,(__this_02->klass->vtable)._3_ToString.method);
          ppSVar8 = &(__this_00->fields).logResultStr;
          *ppSVar8 = pSVar5;
          thunk_FUN_01c20e04(ppSVar8,pSVar5);
          __this_04 = Core_Network_ServerProvider__get_Instance((MethodInfo *)0x0);
          pSVar5 = *ppSVar8;
          GFNABKGEGJA_00 =
               (System_Action_bool__string__object__o *)
               thunk_FUN_01bda818(System_Action<bool,_string,_object>_TypeInfo);
          System_Action<bool,_object,_object>___ctor();
          if (__this_04 != (Core_Network_ServerProvider_o *)0x0) {
            Core_Network_ServerProvider__SaveJsonLogAction
                      (__this_04,pSVar5,GFNABKGEGJA_00,CPECAEHDDDB,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

