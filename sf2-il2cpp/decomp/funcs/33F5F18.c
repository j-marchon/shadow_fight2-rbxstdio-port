// AnimatedSprite$$Awake @ RVA 0x33F5F18

void AnimatedSprite__Awake(AnimatedSprite_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_SpriteRenderer_o *pUVar1;
  UnityEngine_SpriteRenderer_o **ppUVar2;
  
  if ((DAT_04567f93 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<SpriteRenderer>__);
    DAT_04567f93 = 1;
  }
  __this_00 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    pUVar1 = (UnityEngine_SpriteRenderer_o *)
             UnityEngine_GameObject__AddComponent<object>
                       (__this_00,Method_UnityEngine_GameObject_AddComponent<SpriteRenderer>__);
    ppUVar2 = &(__this->fields).CAOKGHKPFAE;
    *ppUVar2 = pUVar1;
    thunk_FUN_01c20e04(ppUVar2,pUVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

