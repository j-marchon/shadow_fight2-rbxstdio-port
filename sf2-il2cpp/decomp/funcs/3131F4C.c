// InControl.Utility$$GameObjectIsCulledOnCurrentCamera @ RVA 0x3131F4C

bool InControl_Utility__GameObjectIsCulledOnCurrentCamera
               (UnityEngine_GameObject_o *gameObject,MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  UnityEngine_Camera_o *__this;
  
  __this = UnityEngine_Camera__get_current((MethodInfo *)0x0);
  if (__this != (UnityEngine_Camera_o *)0x0) {
    uVar1 = UnityEngine_Camera__get_cullingMask(__this,(MethodInfo *)0x0);
    if (gameObject != (UnityEngine_GameObject_o *)0x0) {
      uVar2 = UnityEngine_GameObject__get_layer(gameObject,(MethodInfo *)0x0);
      return (uVar1 >> (ulong)(uVar2 & 0x1f) & 1) == 0;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

