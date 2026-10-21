// TypeDefIndex 3393
// Namespace: 
// [CompilerGenerated]
// private sealed class QuestCondition.FLJLCPOKFKJ
// Fields:
//   public string result; // 0x10

// ===== public void .ctor()  [RVA 0x3552784]
// QuestCondition.FLJLCPOKFKJ$$.ctor @ RVA 0x3552784

void QuestCondition_FLJLCPOKFKJ___ctor(QuestCondition_FLJLCPOKFKJ_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== internal bool BPDMPHCNODP(HOOAAGABMBL x)  [RVA 0x355278C]
// QuestCondition.FLJLCPOKFKJ$$BPDMPHCNODP @ RVA 0x355278C

bool QuestCondition_FLJLCPOKFKJ__BPDMPHCNODP
               (QuestCondition_FLJLCPOKFKJ_o *__this,HOOAAGABMBL_o *x,MethodInfo *method)

{
  bool bVar1;
  
  if (x != (HOOAAGABMBL_o *)0x0) {
    bVar1 = System_String__op_Equality
                      ((x->fields)._COIPKAKHDFP_k__BackingField,(__this->fields).result,
                       (MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

