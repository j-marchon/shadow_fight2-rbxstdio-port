// TypeDefIndex 3392
// Namespace: 
// [CompilerGenerated]
// private sealed class QuestCondition.HLPHJOHMPCO
// Fields:
//   public string perkName; // 0x10

// ===== public void .ctor()  [RVA 0x3552758]
// QuestCondition.HLPHJOHMPCO$$.ctor @ RVA 0x3552758

void QuestCondition_HLPHJOHMPCO___ctor(QuestCondition_HLPHJOHMPCO_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== internal bool NBCOOPIHIOI(PerkInfoItem p)  [RVA 0x3552760]
// QuestCondition.HLPHJOHMPCO$$NBCOOPIHIOI @ RVA 0x3552760

bool QuestCondition_HLPHJOHMPCO__NBCOOPIHIOI
               (QuestCondition_HLPHJOHMPCO_o *__this,PerkInfoItem_o *p,MethodInfo *method)

{
  bool bVar1;
  
  if (p != (PerkInfoItem_o *)0x0) {
    bVar1 = System_String__op_Equality
                      ((p->fields).JIJLBFGKNJK,(__this->fields).perkName,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

