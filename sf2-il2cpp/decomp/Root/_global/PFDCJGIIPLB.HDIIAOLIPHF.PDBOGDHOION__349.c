// TypeDefIndex 349
// Namespace: 
// [CompilerGenerated]
// private sealed class PFDCJGIIPLB.HDIIAOLIPHF.PDBOGDHOION
// Fields:
//   public string eventName; // 0x10
//   public Dictionary<string, object> eventData; // 0x18

// ===== internal void OGAHJPOMCJO()  [RVA 0x3358A5C]
// PFDCJGIIPLB.HDIIAOLIPHF.PDBOGDHOION$$OGAHJPOMCJO @ RVA 0x3358A5C

void PFDCJGIIPLB_HDIIAOLIPHF_PDBOGDHOION__OGAHJPOMCJO
               (PFDCJGIIPLB_HDIIAOLIPHF_PDBOGDHOION_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Nekki_Utils_RaidBetaLogger_o *pNVar2;
  
  if ((DAT_04567a4a & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_object>_ContainsKey__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Nekki_Utils_RaidBetaLogger_TypeInfo);
    FUN_01bab630(&StringLiteral_7071/*"Helpshift start conversation"*/);
    FUN_01bab630(&StringLiteral_19658/*"message"*/);
    FUN_01bab630(&StringLiteral_17380/*"conversationStart"*/);
    DAT_04567a4a = 1;
  }
  bVar1 = System_String__op_Equality
                    ((__this->fields).eventName,StringLiteral_17380/*"conversationStart"*/,(MethodInfo *)0x0);
  if (bVar1) {
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                (__this->fields).eventData;
    if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
LAB_03458ba4:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                      (__this_00,StringLiteral_19658/*"message"*/,
                       Method_System_Collections_Generic_Dictionary<string,_object>_ContainsKey__);
    if (bVar1) {
      if ((Nekki_Utils_RaidBetaLogger_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pNVar2 = Nekki_Utils_RaidBetaLogger__Instance((MethodInfo *)0x0);
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if (bVar1) {
        if ((Nekki_Utils_RaidBetaLogger_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pNVar2 = Nekki_Utils_RaidBetaLogger__Instance((MethodInfo *)0x0);
        if (pNVar2 != (Nekki_Utils_RaidBetaLogger_o *)0x0) {
          Nekki_Utils_RaidBetaLogger__TrySendDump(pNVar2,StringLiteral_7071/*"Helpshift start conversation"*/,true,(MethodInfo *)0x0);
          return;
        }
        goto LAB_03458ba4;
      }
    }
  }
  return;
}


// ===== public void .ctor()  [RVA 0x3358A54]
// PFDCJGIIPLB.HDIIAOLIPHF.PDBOGDHOION$$.ctor @ RVA 0x3358A54

void PFDCJGIIPLB_HDIIAOLIPHF_PDBOGDHOION___ctor
               (PFDCJGIIPLB_HDIIAOLIPHF_PDBOGDHOION_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

