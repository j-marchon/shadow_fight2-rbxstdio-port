// TypeDefIndex 1876
// Namespace: 
// [CompilerGenerated]
// private sealed class GeneralMenuScene.HIONODLPPCK : IEnumerator<object>, IEnumerator, IDisposable
// Fields:
//   private int <>1__state; // 0x10
//   private object <>2__current; // 0x18
//   public GeneralMenuScene <>4__this; // 0x20
//   public int slot; // 0x28
//   public float delay; // 0x2C
//   private GeneralMenuScene.OFAPBIKIJBJ <>8__1; // 0x30

// ===== public void .ctor(int <>1__state)  [RVA 0x324F1B4]
// Nekki.SF2.GUI.GeneralMenu.GeneralMenuScene.HIONODLPPCK$$.ctor @ RVA 0x324F1B4

void Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_HIONODLPPCK___ctor
               (Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_HIONODLPPCK_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ===== private void System.IDisposable.Dispose()  [RVA 0x3250078]
// Nekki.SF2.GUI.GeneralMenu.GeneralMenuScene.HIONODLPPCK$$System.IDisposable.Dispose @ RVA 0x3250078

void Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_HIONODLPPCK__System_IDisposable_Dispose
               (Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_HIONODLPPCK_o *__this,MethodInfo *method)

{
  return;
}


// ===== private bool MoveNext()  [RVA 0x325007C]
// Nekki.SF2.GUI.GeneralMenu.GeneralMenuScene.HIONODLPPCK$$MoveNext @ RVA 0x325007C

bool Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_HIONODLPPCK__MoveNext
               (Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_HIONODLPPCK_o *__this,MethodInfo *method)

{
  int iVar1;
  Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_OFAPBIKIJBJ_o *pNVar2;
  UnityEngine_WaitForSeconds_o *__this_00;
  NLPJLHOEAOE_c *pNVar3;
  NLPJLHOEAOE_o *__this_01;
  System_Xml_XmlNode_o *pSVar4;
  System_Action_object__o *IELDNEAAPBE;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  Il2CppObject **ppIVar5;
  Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_o *__this_02;
  Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_OFAPBIKIJBJ_o **ppNVar6;
  float seconds;
  
  if ((DAT_04567123 & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_OFAPBIKIJBJ_BLPJNINLMMF__);
    FUN_01bab630(&Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_OFAPBIKIJBJ_TypeInfo);
    FUN_01bab630(&UnityEngine_WaitForSeconds_TypeInfo);
    FUN_01bab630(&StringLiteral_9679/*"OK"*/);
    FUN_01bab630(&StringLiteral_3640/*"CANCEL"*/);
    FUN_01bab630(&StringLiteral_17850/*"dlgWarning"*/);
    FUN_01bab630(&StringLiteral_11704/*"SaveSlotWarning"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04567123 = 1;
    method = extraout_x1;
  }
  iVar1 = (__this->fields).__1__state;
  __this_02 = (__this->fields).__4__this;
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    if (__this_02 != (Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_o *)0x0) {
      (__this_02->fields).PDNOIJPIOLD = (System_Collections_IEnumerator_o *)0x0;
      thunk_FUN_01c20e04(&(__this_02->fields).PDNOIJPIOLD,0);
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pNVar3 = NLPJLHOEAOE_TypeInfo;
      NLPJLHOEAOE_TypeInfo->static_fields->FBCOPFLPMED = 1;
      if (DAT_0456647b == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_0456647b = '\x01';
        pNVar3 = NLPJLHOEAOE_TypeInfo;
      }
      if ((pNVar3->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
        pNVar3 = NLPJLHOEAOE_TypeInfo;
      }
      pNVar2 = (__this->fields).__8__1;
      if (pNVar2 != (Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_OFAPBIKIJBJ_o *)0x0) {
        if (pNVar3->static_fields->MNPJJPBJCCO == (pNVar2->fields).slot) {
          if ((pNVar3->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          __this_01 = NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)0x0);
          pNVar2 = (__this->fields).__8__1;
          if ((pNVar2 == (Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_OFAPBIKIJBJ_o *)0x0) ||
             (__this_01 == (NLPJLHOEAOE_o *)0x0)) goto LAB_03350384;
          pSVar4 = NLPJLHOEAOE__MBLEGLIMGHP(__this_01,(pNVar2->fields).slot,(MethodInfo *)0x0);
          if (pSVar4 != (System_Xml_XmlNode_o *)0x0) {
            if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            MGNPHCAAEIO__JMKAINOCIJF((MethodInfo *)0x0);
            return false;
          }
        }
        IELDNEAAPBE = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
        System_Action<object>___ctor();
        JJPNLEPEAFM__JNDPLPKDPCP
                  (StringLiteral_17850/*"dlgWarning"*/,StringLiteral_11704/*"SaveSlotWarning"*/,StringLiteral_9679/*"OK"*/,StringLiteral_3640/*"CANCEL"*/,
                   IELDNEAAPBE,1,0,false,false,StringLiteral_1/*""*/,true,true,true,true,(MethodInfo *)0x0
                  );
        return false;
      }
    }
  }
  else {
    if (iVar1 != 0) {
      return false;
    }
    (__this->fields).__1__state = -1;
    pNVar2 = (Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_OFAPBIKIJBJ_o *)
             thunk_FUN_01bda818(Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_OFAPBIKIJBJ_TypeInfo,
                                method);
    System_Object___ctor((Il2CppObject *)pNVar2,(MethodInfo *)0x0);
    ppNVar6 = &(__this->fields).__8__1;
    *ppNVar6 = pNVar2;
    thunk_FUN_01c20e04(ppNVar6,pNVar2);
    if (*ppNVar6 != (Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_OFAPBIKIJBJ_o *)0x0) {
      ((*ppNVar6)->fields).__4__this = (__this->fields).__4__this;
      thunk_FUN_01c20e04();
      if ((*ppNVar6 != (Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_OFAPBIKIJBJ_o *)0x0) &&
         (((*ppNVar6)->fields).slot = (__this->fields).slot,
         __this_02 != (Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_o *)0x0)) {
        Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene__PKBPIMABPCB(__this_02,method_00);
        seconds = (__this->fields).delay;
        __this_00 = (UnityEngine_WaitForSeconds_o *)
                    thunk_FUN_01bda818(UnityEngine_WaitForSeconds_TypeInfo);
        UnityEngine_WaitForSeconds___ctor(__this_00,seconds,(MethodInfo *)0x0);
        ppIVar5 = &(__this->fields).__2__current;
        *ppIVar5 = (Il2CppObject *)__this_00;
        thunk_FUN_01c20e04(ppIVar5,__this_00);
        (__this->fields).__1__state = 1;
        return true;
      }
    }
  }
LAB_03350384:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private object System.Collections.Generic.IEnumerator<System.Object>.get_Current()  [RVA 0x3250388]
// Nekki.SF2.GUI.GeneralMenu.GeneralMenuScene.HIONODLPPCK$$System.Collections.Generic.IEnumerator<System.Object>.get_Current @ RVA 0x3250388

Il2CppObject *
Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_HIONODLPPCK__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_HIONODLPPCK_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ===== private void System.Collections.IEnumerator.Reset()  [RVA 0x3250390]
// Nekki.SF2.GUI.GeneralMenu.GeneralMenuScene.HIONODLPPCK$$System.Collections.IEnumerator.Reset @ RVA 0x3250390

void Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_HIONODLPPCK__System_Collections_IEnumerator_Reset
               (Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_HIONODLPPCK_o *__this,MethodInfo *method)

{
  System_NotSupportedException_o *__this_00;
  undefined8 uVar1;
  
  thunk_FUN_01bb9178(&System_NotSupportedException_TypeInfo);
  __this_00 = (System_NotSupportedException_o *)thunk_FUN_01bda818();
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = thunk_FUN_01bb9178(&
                             Method_Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_HIONODLPPCK_System_Collections_IEnumerator_Reset__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_01bab798(__this_00,uVar1);
}


// ===== private object System.Collections.IEnumerator.get_Current()  [RVA 0x32503C8]
// Nekki.SF2.GUI.GeneralMenu.GeneralMenuScene.HIONODLPPCK$$System.Collections.IEnumerator.get_Current @ RVA 0x32503C8

Il2CppObject *
Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_HIONODLPPCK__System_Collections_IEnumerator_get_Current
          (Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_HIONODLPPCK_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}

