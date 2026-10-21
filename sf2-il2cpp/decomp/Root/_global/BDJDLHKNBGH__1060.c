// TypeDefIndex 1060
// Namespace: 
// public class BDJDLHKNBGH : CELDGLHBCAM
// Fields:
//   private readonly SerialDisposable BINFBNNNALO; // 0x18

// ===== public void .ctor()  [RVA 0x30D823C]
// BDJDLHKNBGH$$.ctor @ RVA 0x30D823C

void BDJDLHKNBGH___ctor(BDJDLHKNBGH_o *__this,MethodInfo *method)

{
  UniRx_SerialDisposable_o *__this_00;
  UniRx_SerialDisposable_o **ppUVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456633b & 1) == 0) {
    FUN_01bab630(&UniRx_SerialDisposable_TypeInfo);
    DAT_0456633b = 1;
    method = extraout_x1;
  }
  __this_00 = (UniRx_SerialDisposable_o *)thunk_FUN_01bda818(UniRx_SerialDisposable_TypeInfo,method)
  ;
  UniRx_SerialDisposable___ctor(__this_00,(MethodInfo *)0x0);
  ppUVar1 = &(__this->fields).BINFBNNNALO;
  *ppUVar1 = __this_00;
  thunk_FUN_01c20e04(ppUVar1,__this_00);
  CELDGLHBCAM___ctor((CELDGLHBCAM_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private void KHNBAJIGOMA(bool HOKBHLPPCAH)  [RVA 0x30D82A8]
// BDJDLHKNBGH$$KHNBAJIGOMA @ RVA 0x30D82A8

void BDJDLHKNBGH__KHNBAJIGOMA(BDJDLHKNBGH_o *__this,bool HOKBHLPPCAH,MethodInfo *method)

{
  FKDLCJJOGIP_o *__this_00;
  
  __this_00 = FKDLCJJOGIP__AIHNLLGNBLC((MethodInfo *)0x0);
  if (__this_00 != (FKDLCJJOGIP_o *)0x0) {
    FKDLCJJOGIP__BBDBCNEEGFB(__this_00,(MethodInfo *)0x0);
    (__this->fields).super._DGMNNLJEMIB_k__BackingField = true;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void IELLEFEFFJD()  [RVA 0x30D82D8]
// BDJDLHKNBGH$$IELLEFEFFJD @ RVA 0x30D82D8

void BDJDLHKNBGH__IELLEFEFFJD(BDJDLHKNBGH_o *__this,MethodInfo *method)

{
  Nekki_SF2_Core_Quests_QuestsManager_o *__this_00;
  long lVar1;
  System_IObservable_bool__o *source;
  System_Func_bool__bool__o **ppSVar2;
  System_IObservable_T__o *source_00;
  System_Action_T__o *onNext;
  System_IDisposable_o *value;
  undefined8 *puVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  UniRx_SerialDisposable_o *__this_01;
  System_Func_bool__bool__o *predicate;
  
  if ((DAT_0456633c & 1) == 0) {
    FUN_01bab630(&System_Action<bool>_TypeInfo);
    FUN_01bab630(&Method_BDJDLHKNBGH_KHNBAJIGOMA__);
    FUN_01bab630(&FGOGONIFJFD_TypeInfo);
    FUN_01bab630(&System_Func<bool,_bool>_TypeInfo);
    FUN_01bab630(&Method_GOCLIOIANDK<IJCLCKIJJDH,_FGOGONIFJFD>_AIHNLLGNBLC__);
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<bool>__);
    FUN_01bab630(&Method_UniRx_Observable_Where<bool>__);
    FUN_01bab630(&UniRx_Observable_TypeInfo);
    FUN_01bab630(&Method_BDJDLHKNBGH_<>c_DLDCIBFCNCP__);
    FUN_01bab630(&BDJDLHKNBGH_<>c_TypeInfo);
    DAT_0456633c = 1;
  }
  CELDGLHBCAM__IELLEFEFFJD((CELDGLHBCAM_o *)__this,(MethodInfo *)0x0);
  __this_00 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
  if (__this_00 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
    Nekki_SF2_Core_Quests_QuestsManager__ScheduleAndRunQuests(__this_00,0x12,(MethodInfo *)0x0);
    __this_01 = (__this->fields).BINFBNNNALO;
    lVar1 = *(long *)(Method_GOCLIOIANDK<IJCLCKIJJDH,_FGOGONIFJFD>_AIHNLLGNBLC__ + 0x20);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_01b81620();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x10);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_01b81620();
    }
    source = IJCEPJPIDON__IFJDHHGCGHE
                       ((FGOGONIFJFD_o *)**(undefined8 **)(lVar1 + 0xb8),(MethodInfo *)0x0);
    if ((BDJDLHKNBGH_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(BDJDLHKNBGH_<>c_TypeInfo);
    }
    predicate = BDJDLHKNBGH_<>c_TypeInfo->static_fields->__9__1_0;
    if (predicate == (System_Func_bool__bool__o *)0x0) {
      if ((BDJDLHKNBGH_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(BDJDLHKNBGH_<>c_TypeInfo);
      }
      predicate = (System_Func_bool__bool__o *)thunk_FUN_01bda818(System_Func<bool,_bool>_TypeInfo);
      System_Func<bool,_bool>___ctor();
      ppSVar2 = &BDJDLHKNBGH_<>c_TypeInfo->static_fields->__9__1_0;
      *ppSVar2 = predicate;
      thunk_FUN_01c20e04(ppSVar2,predicate);
    }
    if ((UniRx_Observable_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    source_00 = UniRx_Observable__Where<bool>
                          ((System_IObservable_T__o *)source,(System_Func_T__bool__o *)predicate,
                           Method_UniRx_Observable_Where<bool>__);
    onNext = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<bool>_TypeInfo);
    System_Action<bool>___ctor();
    value = UniRx_ObservableExtensions__Subscribe<bool>
                      (source_00,onNext,Method_UniRx_ObservableExtensions_Subscribe<bool>__);
    if (__this_01 != (UniRx_SerialDisposable_o *)0x0) {
      UniRx_SerialDisposable__set_Disposable(__this_01,value,(MethodInfo *)0x0);
      lVar1 = *(long *)(Method_GOCLIOIANDK<IJCLCKIJJDH,_FGOGONIFJFD>_AIHNLLGNBLC__ + 0x20);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_01b81620();
      }
      lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x10);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_01b81620();
      }
      plVar6 = (long *)**(undefined8 **)(lVar1 + 0xb8);
      if (plVar6 != (long *)0x0) {
        lVar1 = *plVar6;
        uVar4 = (ulong)*(ushort *)(lVar1 + 0x12e);
        if (uVar4 != 0) {
          piVar5 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
          do {
            if (*(FGOGONIFJFD_c **)(piVar5 + -2) == FGOGONIFJFD_TypeInfo) {
              puVar3 = (undefined8 *)(lVar1 + (long)(*piVar5 + 2) * 0x10 + 0x138);
              goto LAB_031d858c;
            }
            uVar4 = uVar4 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar4 != 0);
        }
        puVar3 = (undefined8 *)FUN_01b81914(plVar6,FGOGONIFJFD_TypeInfo,2);
LAB_031d858c:
                    /* WARNING: Could not recover jumptable at 0x031d85ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)*puVar3)(plVar6,0,puVar3[1]);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void EABJNHKPJOM()  [RVA 0x30D85B4]
// BDJDLHKNBGH$$EABJNHKPJOM @ RVA 0x30D85B4

void BDJDLHKNBGH__EABJNHKPJOM(BDJDLHKNBGH_o *__this,MethodInfo *method)

{
  UniRx_SerialDisposable_o *__this_00;
  
  if ((DAT_0456633d & 1) == 0) {
    FUN_01bab630(&UniRx_Disposable_TypeInfo);
    DAT_0456633d = 1;
  }
  CELDGLHBCAM__EABJNHKPJOM((CELDGLHBCAM_o *)__this,(MethodInfo *)0x0);
  __this_00 = (__this->fields).BINFBNNNALO;
  if ((UniRx_Disposable_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (__this_00 != (UniRx_SerialDisposable_o *)0x0) {
    UniRx_SerialDisposable__set_Disposable
              (__this_00,UniRx_Disposable_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

