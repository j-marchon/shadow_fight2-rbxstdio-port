// LevelPlaySample$$DCKMGPNJNIC @ RVA 0x322AC38

void LevelPlaySample__DCKMGPNJNIC
               (LevelPlaySample_o *__this,
               Unity_Services_LevelPlay_LevelPlayImpressionData_o *CAIHANIEHPM,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if ((DAT_04566f9e & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&StringLiteral_15519);
                    /* try { // try from 0332ac7c to 0342ac83 has its CatchHandler @ 0332ad14 */
    FUN_01bab630(&StringLiteral_15518);
                    /* try { // try from 0332ac8c to 0342acb7 has its CatchHandler @ 0332ad1c */
    DAT_04566f9e = 1;
  }
  pSVar1 = System_String__Format(StringLiteral_15518,(Il2CppObject *)CAIHANIEHPM,(MethodInfo *)0x0);
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
  }
                    /* try { // try from 0332acb8 to 0342acff has its CatchHandler @ 0332a7c8 */
  UnityEngine_Debug__Log((Il2CppObject *)pSVar1,(MethodInfo *)0x0);
  if (CAIHANIEHPM != (Unity_Services_LevelPlay_LevelPlayImpressionData_o *)0x0) {
    pSVar1 = System_String__Concat
                       (StringLiteral_15519,(CAIHANIEHPM->fields)._AllData_k__BackingField,
                        (MethodInfo *)0x0);
    UnityEngine_Debug__Log((Il2CppObject *)pSVar1,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

