// TypeDefIndex 1877
// Namespace: 
// [CompilerGenerated]
// private sealed class GeneralMenuScene.KHCLJKKPKNA : IEnumerator<object>, IEnumerator, IDisposable
// Fields:
//   private int <>1__state; // 0x10
//   private object <>2__current; // 0x18
//   public object data; // 0x20
//   public int slot; // 0x28
//   public GeneralMenuScene <>4__this; // 0x30

// ===== public void .ctor(int <>1__state)  [RVA 0x324E944]
// Nekki.SF2.GUI.GeneralMenu.GeneralMenuScene.KHCLJKKPKNA$$.ctor @ RVA 0x324E944

void Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_KHCLJKKPKNA___ctor
               (Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_KHCLJKKPKNA_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ===== private void System.IDisposable.Dispose()  [RVA 0x32503D0]
// Nekki.SF2.GUI.GeneralMenu.GeneralMenuScene.KHCLJKKPKNA$$System.IDisposable.Dispose @ RVA 0x32503D0

void Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_KHCLJKKPKNA__System_IDisposable_Dispose
               (Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_KHCLJKKPKNA_o *__this,MethodInfo *method)

{
  return;
}


// ===== private bool MoveNext()  [RVA 0x32503D4]
// Nekki.SF2.GUI.GeneralMenu.GeneralMenuScene.KHCLJKKPKNA$$MoveNext @ RVA 0x32503D4

bool Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_KHCLJKKPKNA__MoveNext
               (Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_KHCLJKKPKNA_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  Il2CppObject *pIVar3;
  NLPJLHOEAOE_c *pNVar4;
  MainSettings_o *__this_00;
  NDPMLPGANCI_o *__this_01;
  Il2CppObject **ppIVar5;
  Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_o *__this_02;
  undefined1 auVar6 [16];
  
  if ((DAT_04567124 & 1) == 0) {
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04567124 = 1;
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 1) {
    pIVar3 = (__this->fields).data;
    __this_02 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    if (pIVar3 != (Il2CppObject *)0x0) {
      if ((pIVar3->klass->_1).element_class != (int_TypeInfo->_1).element_class) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64();
      }
      auVar6 = thunk_FUN_01bda96c();
      if (*auVar6._0_8_ == 1) {
        iVar2 = (__this->fields).slot;
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        if (DAT_04566e5b == '\0') {
          FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
          DAT_04566e5b = '\x01';
        }
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pNVar4 = NLPJLHOEAOE_TypeInfo;
        NLPJLHOEAOE_TypeInfo->static_fields->MNPJJPBJCCO = iVar2;
        if (DAT_04565e59 == '\0') {
          FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
          DAT_04565e59 = '\x01';
          pNVar4 = NLPJLHOEAOE_TypeInfo;
        }
        if ((pNVar4->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
          pNVar4 = NLPJLHOEAOE_TypeInfo;
        }
        __this_00 = pNVar4->static_fields->EIHHKABBIMJ;
        if (__this_00 != (MainSettings_o *)0x0) {
          MainSettings__JDAMFAMMNKM(__this_00,(__this->fields).slot,(MethodInfo *)0x0);
          __this_01 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
          if (__this_01 != (NDPMLPGANCI_o *)0x0) {
            NDPMLPGANCI__EKPAFDJIAGI
                      (__this_01,0,(Il2CppObject *)0x0,(System_Action_object__o *)0x0,false,
                       (MethodInfo *)0x0);
            return false;
          }
        }
      }
      else if (__this_02 != (Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_o *)0x0) {
        Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene__DADMLBCLHBI(__this_02,auVar6._8_8_);
        return false;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if (iVar1 != 0) {
    return false;
  }
  ppIVar5 = &(__this->fields).__2__current;
  *ppIVar5 = (Il2CppObject *)0x0;
  (__this->fields).__1__state = -1;
  thunk_FUN_01c20e04(ppIVar5,0);
  (__this->fields).__1__state = 1;
  return true;
}


// ===== private object System.Collections.Generic.IEnumerator<System.Object>.get_Current()  [RVA 0x3250578]
// Nekki.SF2.GUI.GeneralMenu.GeneralMenuScene.KHCLJKKPKNA$$System.Collections.Generic.IEnumerator<System.Object>.get_Current @ RVA 0x3250578

Il2CppObject *
Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_KHCLJKKPKNA__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_KHCLJKKPKNA_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ===== private void System.Collections.IEnumerator.Reset()  [RVA 0x3250580]
// Nekki.SF2.GUI.GeneralMenu.GeneralMenuScene.KHCLJKKPKNA$$System.Collections.IEnumerator.Reset @ RVA 0x3250580

void Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_KHCLJKKPKNA__System_Collections_IEnumerator_Reset
               (Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_KHCLJKKPKNA_o *__this,MethodInfo *method)

{
  System_NotSupportedException_o *__this_00;
  undefined8 uVar1;
  
  thunk_FUN_01bb9178(&System_NotSupportedException_TypeInfo);
  __this_00 = (System_NotSupportedException_o *)thunk_FUN_01bda818();
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = thunk_FUN_01bb9178(&
                             Method_Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_KHCLJKKPKNA_System_Collections_IEnumerator_Reset__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_01bab798(__this_00,uVar1);
}


// ===== private object System.Collections.IEnumerator.get_Current()  [RVA 0x32505B8]
// Nekki.SF2.GUI.GeneralMenu.GeneralMenuScene.KHCLJKKPKNA$$System.Collections.IEnumerator.get_Current @ RVA 0x32505B8

Il2CppObject *
Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_KHCLJKKPKNA__System_Collections_IEnumerator_get_Current
          (Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_KHCLJKKPKNA_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}

