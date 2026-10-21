// TypeDefIndex 1317
// Namespace: 
// public class LIDILBBODBM : APCCLHJNENF
// Fields:
//   private readonly MJPJANJNDCI<CdnMirrorsConfig> OAOMFCGPCBP; // 0x10
//   private readonly Lazy<TimeSpan> GAFHPBLKILE; // 0x18

// ===== private TimeSpan EOOKNHCKOKI()  [RVA 0x315A318]
// LIDILBBODBM$$EOOKNHCKOKI @ RVA 0x315A318

System_TimeSpan_o LIDILBBODBM__EOOKNHCKOKI(LIDILBBODBM_o *__this,MethodInfo *method)

{
  int iVar1;
  ushort uVar2;
  VirtualInvokeData *pVVar3;
  System_TimeSpan_o SVar4;
  MJPJANJNDCI_CdnMirrorsConfig__c *pMVar5;
  long lVar6;
  ulong uVar7;
  int32_t *piVar8;
  MJPJANJNDCI_CdnMirrorsConfig__o *pMVar9;
  undefined1 auVar10 [16];
  
  auVar10._8_8_ = method;
  auVar10._0_8_ = __this;
  if ((DAT_0456685f & 1) == 0) {
    FUN_01bab630(&MJPJANJNDCI<CdnMirrorsConfig>_TypeInfo);
    auVar10 = FUN_01bab630(&System_TimeSpan_TypeInfo);
    DAT_0456685f = 1;
  }
  pMVar9 = (__this->fields).OAOMFCGPCBP;
  if (pMVar9 != (MJPJANJNDCI_CdnMirrorsConfig__o *)0x0) {
    pMVar5 = pMVar9->klass;
    uVar2._0_1_ = (pMVar5->_2).rank;
    uVar2._1_1_ = (pMVar5->_2).minimumAlignment;
    uVar7 = (ulong)uVar2;
    if (uVar7 != 0) {
      piVar8 = &((pMVar5->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
            (Il2CppClass *)MJPJANJNDCI<CdnMirrorsConfig>_TypeInfo) {
          pVVar3 = pMVar5->vtable + *piVar8;
          goto LAB_0325a3ac;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    pVVar3 = (VirtualInvokeData *)FUN_01b81914(pMVar9,MJPJANJNDCI<CdnMirrorsConfig>_TypeInfo,0);
LAB_0325a3ac:
    auVar10 = (*pVVar3->methodPtr)(pMVar9,pVVar3->method);
    if ((auVar10._0_8_ != 0) && (lVar6 = *(long *)(auVar10._0_8_ + 0x20), lVar6 != 0)) {
      iVar1 = *(int *)(lVar6 + 0x10);
      if ((System_TimeSpan_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      SVar4 = System_TimeSpan__FromSeconds((double)iVar1,(MethodInfo *)0x0);
      return (System_TimeSpan_o)SVar4.fields._ticks;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar10._0_8_,auVar10._8_8_);
}


// ===== public bool INJGBDANOLJ(Nullable<DateTime> PLPINLMDGKE)  [RVA 0x315A3F8]
// LIDILBBODBM$$INJGBDANOLJ @ RVA 0x315A3F8

bool LIDILBBODBM__INJGBDANOLJ
               (LIDILBBODBM_o *__this,System_Nullable_DateTime__o PLPINLMDGKE,MethodInfo *method)

{
  char cVar1;
  System_TimeSpan_Fields t1;
  bool bVar2;
  System_DateTime_o d1;
  System_TimeSpan_o SVar3;
  System_Lazy_TimeSpan__o *__this_00;
  System_Nullable_TimeSpan__o __this_01;
  undefined8 local_40;
  System_TimeSpan_Fields local_38;
  
  if ((DAT_04566860 & 1) == 0) {
    FUN_01bab630(&System_DateTime_TypeInfo);
    FUN_01bab630(&Method_System_Lazy<TimeSpan>_get_Value__);
    FUN_01bab630(&Method_System_Nullable<DateTime>_GetValueOrDefault__);
    FUN_01bab630(&Method_System_Nullable<TimeSpan>_GetValueOrDefault__);
    FUN_01bab630(&Method_System_Nullable<TimeSpan>__ctor__);
    FUN_01bab630(&Method_System_Nullable<DateTime>_get_HasValue__);
    FUN_01bab630(&Method_System_Nullable<TimeSpan>_get_HasValue__);
    FUN_01bab630(&System_TimeSpan_TypeInfo);
    DAT_04566860 = 1;
  }
  if ((PLPINLMDGKE.fields._0_8_ & 0xff) != 0) {
    if ((System_DateTime_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    d1 = System_DateTime__get_UtcNow((MethodInfo *)0x0);
    if ((System_DateTime_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(System_DateTime_TypeInfo);
    }
    SVar3 = System_DateTime__op_Subtraction
                      (d1,PLPINLMDGKE.fields.value.fields._dateData,(MethodInfo *)0x0);
    local_40 = 0;
    local_38._ticks = 0;
    __this_01.fields.value.fields._ticks = SVar3.fields._ticks;
    __this_01.fields._0_8_ = &local_40;
    System_Nullable<TimeSpan>___ctor
              (__this_01,(System_TimeSpan_o)Method_System_Nullable<TimeSpan>__ctor__._ticks,
               (MethodInfo_27FB8F4 *)method);
    t1._ticks = local_38._ticks;
    __this_00 = (__this->fields).GAFHPBLKILE;
    if (__this_00 == (System_Lazy_TimeSpan__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    cVar1 = (char)local_40;
    SVar3 = System_Lazy<TimeSpan>__get_Value(__this_00,Method_System_Lazy<TimeSpan>_get_Value__);
    if (cVar1 != '\0') {
      if ((System_TimeSpan_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar2 = System_TimeSpan__op_GreaterThan((System_TimeSpan_o)t1._ticks,SVar3,(MethodInfo *)0x0);
      return bVar2;
    }
  }
  return false;
}


// ===== public void .ctor(MJPJANJNDCI<CdnMirrorsConfig> HLFCHMCOPID)  [RVA 0x315A568]
// LIDILBBODBM$$.ctor @ RVA 0x315A568

void LIDILBBODBM___ctor(LIDILBBODBM_o *__this,MJPJANJNDCI_CdnMirrorsConfig__o *HLFCHMCOPID,
                       MethodInfo *method)

{
  System_Func_T__o *valueFactory;
  System_Lazy_TimeSpan__o *__this_00;
  System_Lazy_TimeSpan__o **ppSVar1;
  
  if ((DAT_04566861 & 1) == 0) {
    FUN_01bab630(&System_Func<TimeSpan>_TypeInfo);
    FUN_01bab630(&Method_LIDILBBODBM_EOOKNHCKOKI__);
    FUN_01bab630(&Method_System_Lazy<TimeSpan>__ctor__);
    FUN_01bab630(&System_Lazy<TimeSpan>_TypeInfo);
    DAT_04566861 = 1;
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
                    /* try { // try from 0325a5f4 to 0335a797 has its CatchHandler @ 0325a5f4
                       catch() { ... } // from try @ 0325a5f4 with catch @ 0325a5f4
                       catch() { ... } // from try @ 0325a9c8 with catch @ 0325a5f4
                       catch() { ... } // from try @ 0325a9fc with catch @ 0325a5f4
                       catch() { ... } // from try @ 0325ab44 with catch @ 0325a5f4
                       catch() { ... } // from try @ 0325ab80 with catch @ 0325a5f4
                       catch() { ... } // from try @ 0325abf0 with catch @ 0325a5f4
                       catch() { ... } // from try @ 0325ac30 with catch @ 0325a5f4 */
  (__this->fields).OAOMFCGPCBP = HLFCHMCOPID;
  thunk_FUN_01c20e04(&__this->fields,HLFCHMCOPID);
  valueFactory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<TimeSpan>_TypeInfo);
  System_Func<TimeSpan>___ctor();
  __this_00 = (System_Lazy_TimeSpan__o *)thunk_FUN_01bda818(System_Lazy<TimeSpan>_TypeInfo);
  System_Lazy<TimeSpan>___ctor(__this_00,valueFactory,Method_System_Lazy<TimeSpan>__ctor__);
  ppSVar1 = &(__this->fields).GAFHPBLKILE;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  return;
}


// ===== public bool MKEOPCGJMJG(int FJDDMAGMKGM)  [RVA 0x315A654]
// LIDILBBODBM$$MKEOPCGJMJG @ RVA 0x315A654

bool LIDILBBODBM__MKEOPCGJMJG(LIDILBBODBM_o *__this,int32_t FJDDMAGMKGM,MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  long lVar3;
  MJPJANJNDCI_CdnMirrorsConfig__c *pMVar4;
  ulong uVar5;
  int32_t *piVar6;
  MJPJANJNDCI_CdnMirrorsConfig__o *pMVar7;
  
  if ((DAT_04566862 & 1) == 0) {
    FUN_01bab630(&MJPJANJNDCI<CdnMirrorsConfig>_TypeInfo);
    DAT_04566862 = 1;
  }
  pMVar7 = (__this->fields).OAOMFCGPCBP;
  if (pMVar7 != (MJPJANJNDCI_CdnMirrorsConfig__o *)0x0) {
    pMVar4 = pMVar7->klass;
    uVar1._0_1_ = (pMVar4->_2).rank;
    uVar1._1_1_ = (pMVar4->_2).minimumAlignment;
    uVar5 = (ulong)uVar1;
    if (uVar5 != 0) {
      piVar6 = &((pMVar4->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
            (Il2CppClass *)MJPJANJNDCI<CdnMirrorsConfig>_TypeInfo) {
          pVVar2 = pMVar4->vtable + *piVar6;
          goto LAB_0325a6e0;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    pVVar2 = (VirtualInvokeData *)FUN_01b81914(pMVar7,MJPJANJNDCI<CdnMirrorsConfig>_TypeInfo,0);
LAB_0325a6e0:
    lVar3 = (*pVVar2->methodPtr)(pMVar7,pVVar2->method);
    if ((lVar3 != 0) && (*(long *)(lVar3 + 0x20) != 0)) {
      return *(int *)(*(long *)(lVar3 + 0x20) + 0x14) < FJDDMAGMKGM;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

