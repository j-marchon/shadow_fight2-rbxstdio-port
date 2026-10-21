// UnitySpriteAnimator$$HHINJBCNODJ @ RVA 0x32ED79C

void UnitySpriteAnimator__HHINJBCNODJ
               (UnitySpriteAnimator_o *__this,int32_t DPJIDNBJIBG,MethodInfo *method)

{
  System_Collections_Generic_List_UnityAnimator_PNHHAMAIIAB__o *__this_00;
  UnityEngine_SpriteRenderer_o *__this_01;
  UnityEngine_Animation_o *__this_02;
  UnityAnimator_PNHHAMAIIAB_o local_40;
  
  if ((DAT_04567651 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<UnityAnimator_PNHHAMAIIAB>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<UnityAnimator_PNHHAMAIIAB>_get_Item__);
    DAT_04567651 = 1;
  }
  __this_00 = (__this->fields).super.IHPLPDKKAEK;
  if (__this_00 != (System_Collections_Generic_List_UnityAnimator_PNHHAMAIIAB__o *)0x0) {
    if ((__this_00->fields)._size <= DPJIDNBJIBG) {
      return;
    }
    System_Collections_Generic_List<UnityAnimator_PNHHAMAIIAB>__get_Item
              (&local_40,__this_00,DPJIDNBJIBG,
               Method_System_Collections_Generic_List<UnityAnimator_PNHHAMAIIAB>_get_Item__);
    __this_01 = (__this->fields)._sr;
    if (__this_01 != (UnityEngine_SpriteRenderer_o *)0x0) {
      UnityEngine_SpriteRenderer__set_sprite
                (__this_01,local_40.fields.KCLMKBAMNPA,(MethodInfo *)0x0);
      __this_02 = (__this->fields).super._animator;
      if (__this_02 != (UnityEngine_Animation_o *)0x0) {
        UnityEngine_Animation__Play(__this_02,local_40.fields.HHADPFIIKIG,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

