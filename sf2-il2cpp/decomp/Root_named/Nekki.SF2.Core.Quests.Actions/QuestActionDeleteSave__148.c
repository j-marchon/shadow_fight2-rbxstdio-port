// Original name: Nekki.SF2.Core.Quests.Actions.QuestActionDeleteSave  (obfuscated HOEDBLCFMAO)
// TypeDefIndex 148
// Namespace: 
// public class QuestActionDeleteSave : QuestAction
// Fields:

// ===== public override void MAHFCKJGBPP(PKHMIGFEJCL AAJBIMFNMBB)  [RVA 0x3020320]
// QuestActionDeleteSave$$MAHFCKJGBPP @ RVA 0x3020320

void QuestActionDeleteSave__MAHFCKJGBPP(QuestActionDeleteSave_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  System_String_o *pSVar1;
  NLPJLHOEAOE_o *__this_00;
  int32_t local_24;
  
                    /* try { // try from 03120320 to 0322032b has its CatchHandler @ 03120064 */
                    /* try { // try from 0312032c to 03220333 has its CatchHandler @ 03120334 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 031202f8 with catch @ 03120334
                       catch(type#2 @ 00000000) { ... } // from try @ 0312032c with catch @ 03120334
                        */
  if ((DAT_04565c3d & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_10651/*"QuestActionDeleteSave::DeleteSlot "*/);
    DAT_04565c3d = 1;
  }
  QuestAction__MAHFCKJGBPP((QuestAction_o *)__this,AAJBIMFNMBB,(MethodInfo *)0x0);
  if (AAJBIMFNMBB != (PKHMIGFEJCL_o *)0x0) {
    local_24 = (AAJBIMFNMBB->fields).DODHDMOKABD;
    pSVar1 = System_Int32__ToString((int32_t)&local_24,(MethodInfo *)0x0);
    pSVar1 = System_String__Concat(StringLiteral_10651/*"QuestActionDeleteSave::DeleteSlot "*/,pSVar1,(MethodInfo *)0x0);
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 031203d4 to 032204cf has its CatchHandler @ 031203d4
                       catch() { ... } // from try @ 031203d4 with catch @ 031203d4
                       catch() { ... } // from try @ 031209ac with catch @ 031203d4
                       catch() { ... } // from try @ 03120a58 with catch @ 031203d4
                       catch() { ... } // from try @ 03120ae8 with catch @ 031203d4
                       catch() { ... } // from try @ 03120c00 with catch @ 031203d4
                       catch() { ... } // from try @ 03120c64 with catch @ 031203d4 */
      thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
    }
    UnityEngine_Debug__Log((Il2CppObject *)pSVar1,(MethodInfo *)0x0);
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_00 = NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)0x0);
    if (__this_00 != (NLPJLHOEAOE_o *)0x0) {
      NLPJLHOEAOE__JHIMPMJKFJP(__this_00,local_24,(MethodInfo *)0x0);
      QuestAction__FGNINNOOCCL((QuestAction_o *)__this,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x302042C]
// QuestActionDeleteSave$$.ctor @ RVA 0x302042C

void QuestActionDeleteSave___ctor(QuestActionDeleteSave_o *__this,MethodInfo *method)

{
  QuestAction___ctor((QuestAction_o *)__this,(MethodInfo *)0x0);
  return;
}

