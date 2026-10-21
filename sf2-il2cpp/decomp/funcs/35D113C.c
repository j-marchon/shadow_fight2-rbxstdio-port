// UnityAnimator$$HHINJBCNODJ @ RVA 0x35D113C

void UnityAnimator__HHINJBCNODJ(UnityAnimator_o *__this,int32_t DPJIDNBJIBG,MethodInfo *method)

{
  System_Collections_Generic_List_UnityAnimator_PNHHAMAIIAB__o *__this_00;
  System_String_o *animation;
  UnityEngine_Animation_o *__this_01;
  UnityAnimator_PNHHAMAIIAB_o UStack_40;
  
  if ((DAT_04568fe3 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<UnityAnimator_PNHHAMAIIAB>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<UnityAnimator_PNHHAMAIIAB>_get_Item__);
    DAT_04568fe3 = 1;
  }
  __this_00 = (__this->fields).IHPLPDKKAEK;
  if (__this_00 != (System_Collections_Generic_List_UnityAnimator_PNHHAMAIIAB__o *)0x0) {
    if ((__this_00->fields)._size <= DPJIDNBJIBG) {
      return;
    }
    System_Collections_Generic_List<UnityAnimator_PNHHAMAIIAB>__get_Item
              (&UStack_40,__this_00,DPJIDNBJIBG,
               Method_System_Collections_Generic_List<UnityAnimator_PNHHAMAIIAB>_get_Item__);
    if (UStack_40.fields.ONPNAGNAPOL != (UnityEngine_AnimationClip_o *)0x0) {
      __this_01 = (__this->fields)._animator;
      animation = UnityEngine_Object__get_name
                            ((UnityEngine_Object_o *)UStack_40.fields.ONPNAGNAPOL,(MethodInfo *)0x0)
      ;
      if (__this_01 != (UnityEngine_Animation_o *)0x0) {
        UnityEngine_Animation__Play(__this_01,animation,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

