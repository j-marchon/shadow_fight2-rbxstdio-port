// AnimatedSprite$$SetFrames @ RVA 0x33F5F98

void AnimatedSprite__SetFrames
               (AnimatedSprite_o *__this,UnityEngine_Sprite_array *CEOMAJNEJFK,MethodInfo *method)

{
  int32_t iVar1;
  System_Collections_Generic_List_Sprite__o *__this_00;
  System_Collections_Generic_List_Sprite__o **ppSVar2;
  
  if ((DAT_04567f94 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<Sprite>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Sprite>_get_Count__);
    FUN_01bab630(&System_Collections_Generic_List<Sprite>_TypeInfo);
    DAT_04567f94 = 1;
  }
  __this_00 = (System_Collections_Generic_List_Sprite__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<Sprite>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             (System_Collections_Generic_IEnumerable_T__o *)CEOMAJNEJFK,
             Method_System_Collections_Generic_List<Sprite>__ctor__);
  ppSVar2 = &(__this->fields).EJNOBBDDBDO;
  *ppSVar2 = __this_00;
  thunk_FUN_01c20e04(ppSVar2,__this_00);
  if (*ppSVar2 != (System_Collections_Generic_List_Sprite__o *)0x0) {
    iVar1 = ((*ppSVar2)->fields)._size;
    (__this->fields).HFCMLMAKMNJ = true;
    (__this->fields).KOCFHNLDNFB = iVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

