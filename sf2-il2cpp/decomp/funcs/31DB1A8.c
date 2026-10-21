// UnityEngine.TransformExtensions$$DeleteAllChildrenObjects @ RVA 0x31DB1A8

void UnityEngine_TransformExtensions__DeleteAllChildrenObjects
               (UnityEngine_Transform_o *root,MethodInfo *method)

{
  int index;
  UnityEngine_Transform_o *__this;
  UnityEngine_Object_o *obj;
  
  if ((DAT_04566d12 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566d12 = 1;
  }
  if (root != (UnityEngine_Transform_o *)0x0) {
    index = UnityEngine_Transform__get_childCount(root,(MethodInfo *)0x0);
    while( true ) {
      index = index + -1;
      if (index < 0) {
        UnityEngine_Transform__DetachChildren(root,(MethodInfo *)0x0);
        return;
      }
      __this = UnityEngine_Transform__GetChild(root,index,(MethodInfo *)0x0);
      if (__this == (UnityEngine_Transform_o *)0x0) break;
      obj = (UnityEngine_Object_o *)
            UnityEngine_Component__get_gameObject
                      ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy(obj,(MethodInfo *)0x0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

