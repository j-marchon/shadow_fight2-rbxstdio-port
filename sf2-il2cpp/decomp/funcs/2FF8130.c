// JMDPBFOCHHP$$ECPPCMKAGNG @ RVA 0x2FF8130

void JMDPBFOCHHP__ECPPCMKAGNG(JMDPBFOCHHP_o *__this,MethodInfo *method)

{
  int iVar1;
  ushort uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  System_Threading_CancellationTokenSource_o *__this_00;
  Il2CppObject *pIVar5;
  JMDPBFOCHHP_o *__this_01;
  System_String_o *pSVar6;
  undefined8 uVar7;
  System_TimeSpan_o SVar8;
  System_Threading_CancellationToken_o SVar9;
  VirtualInvokeData *pVVar10;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo_27FB8F4 *method_01;
  undefined8 in_x7;
  JMDPBFOCHHP_c *pJVar11;
  ulong uVar12;
  int32_t *piVar13;
  System_Threading_CancellationTokenSource_o **ppSVar14;
  System_Nullable_TimeSpan__o __this_02;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if ((DAT_04565ab2 & 1) == 0) {
    FUN_01bab630(&System_Action<EDLFPEGBIFO>_TypeInfo);
    FUN_01bab630(&CFOCLEDKNKL_TypeInfo);
    FUN_01bab630(&System_Threading_CancellationTokenSource_TypeInfo);
    FUN_01bab630(&Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
    FUN_01bab630(&Method_JMDPBFOCHHP_JNOBNELLFNE__);
    FUN_01bab630(&Method_System_Nullable<TimeSpan>__ctor__);
    FUN_01bab630(&System_TimeSpan_TypeInfo);
    DAT_04565ab2 = 1;
    method = extraout_x1;
  }
  JMDPBFOCHHP__HFCBMLPLEAN(__this,method);
  __this_00 = (System_Threading_CancellationTokenSource_o *)
              thunk_FUN_01bda818(System_Threading_CancellationTokenSource_TypeInfo);
  System_Threading_CancellationTokenSource___ctor(__this_00,(MethodInfo *)0x0);
  ppSVar14 = &(__this->fields).PKFOIMOONKL;
  *ppSVar14 = __this_00;
  thunk_FUN_01c20e04(ppSVar14,__this_00);
  if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pIVar5 = IFAMAAGNCBJ__GPBMELHDADN<object>(Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
  __this_01 = (JMDPBFOCHHP_o *)IFAMAAGNCBJ__FJMALJPIMBO((MethodInfo *)0x0);
  pSVar6 = JMDPBFOCHHP__NNJKLBBDFFO(__this_01,method_00);
  uVar7 = thunk_FUN_01bda818(System_Action<EDLFPEGBIFO>_TypeInfo);
  method_01 = (MethodInfo_27FB8F4 *)0x0;
  System_Action<object>___ctor();
  if (pIVar5 != (Il2CppObject *)0x0) {
    iVar1 = *(int *)&pIVar5[4].klass;
    if ((System_TimeSpan_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    SVar8 = System_TimeSpan__FromMilliseconds((double)iVar1,(MethodInfo *)0x0);
    local_50 = 0;
    uStack_48 = 0;
    __this_02.fields.value.fields._ticks = SVar8.fields._ticks;
    __this_02.fields._0_8_ = &local_50;
    System_Nullable<TimeSpan>___ctor
              (__this_02,(System_TimeSpan_o)Method_System_Nullable<TimeSpan>__ctor__._ticks,
               method_01);
    if ((*ppSVar14 != (System_Threading_CancellationTokenSource_o *)0x0) &&
       (SVar9 = System_Threading_CancellationTokenSource__get_Token(*ppSVar14,(MethodInfo *)0x0),
       uVar4 = uStack_48, uVar3 = local_50, __this_01 != (JMDPBFOCHHP_o *)0x0)) {
      pJVar11 = __this_01->klass;
      uVar2._0_1_ = (pJVar11->_2).rank;
      uVar2._1_1_ = (pJVar11->_2).minimumAlignment;
      uVar12 = (ulong)uVar2;
      if (uVar12 != 0) {
        piVar13 = &((pJVar11->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar13 + -2))->interfaceType ==
              (Il2CppClass *)CFOCLEDKNKL_TypeInfo) {
            pVVar10 = &(pJVar11->vtable)._0_Equals + *piVar13;
            goto LAB_030f831c;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      pVVar10 = (VirtualInvokeData *)FUN_01b81914(__this_01,CFOCLEDKNKL_TypeInfo,0);
LAB_030f831c:
      (*pVVar10->methodPtr)
                (__this_01,pSVar6,uVar7,0,0,1,1,in_x7,uVar3,uVar4,1,SVar9.fields._source,
                 pVVar10->method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

