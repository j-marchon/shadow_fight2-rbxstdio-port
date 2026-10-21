// TypeDefIndex 2879
// Namespace: 
// [CompilerGenerated]
// private sealed class OPNMPAJKDMI.MNFOBMOOCLN
// Fields:
//   public PKHMIGFEJCL parameters; // 0x10

// ===== public void .ctor()  [RVA 0x343E328]
// OPNMPAJKDMI.MNFOBMOOCLN$$.ctor @ RVA 0x343E328

void OPNMPAJKDMI_MNFOBMOOCLN___ctor(OPNMPAJKDMI_MNFOBMOOCLN_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== internal bool FNCKNONJKIK(QuestCondition condition)  [RVA 0x343E8A4]
// OPNMPAJKDMI.MNFOBMOOCLN$$FNCKNONJKIK @ RVA 0x343E8A4

bool OPNMPAJKDMI_MNFOBMOOCLN__FNCKNONJKIK
               (OPNMPAJKDMI_MNFOBMOOCLN_o *__this,QuestCondition_o *condition,MethodInfo *method)

{
  bool bVar1;
  
  if (condition != (QuestCondition_o *)0x0) {
    bVar1 = QuestCondition__DGCODECJJCC(condition,(__this->fields).parameters,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

