// AnimatedSprite$$DHEBEHGMBOA @ RVA 0x33F5E78

void AnimatedSprite__DHEBEHGMBOA(AnimatedSprite_o *__this,int32_t JJMCKHDALCF,MethodInfo *method)

{
  System_Collections_Generic_List_Sprite__o *__this_00;
  UnityEngine_Sprite_o *value;
  UnityEngine_SpriteRenderer_o *__this_01;
  
  if ((DAT_04567f92 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<Sprite>_get_Item__);
    DAT_04567f92 = 1;
  }
  if (JJMCKHDALCF < (__this->fields).KOCFHNLDNFB) {
    __this_00 = (__this->fields).EJNOBBDDBDO;
    if (__this_00 != (System_Collections_Generic_List_Sprite__o *)0x0) {
      __this_01 = (__this->fields).CAOKGHKPFAE;
      value = (UnityEngine_Sprite_o *)
              System_Collections_Generic_List<object>__get_Item
                        ((System_Collections_Generic_List_object__o *)__this_00,JJMCKHDALCF,
                         Method_System_Collections_Generic_List<Sprite>_get_Item__);
      if (__this_01 != (UnityEngine_SpriteRenderer_o *)0x0) {
        UnityEngine_SpriteRenderer__set_sprite(__this_01,value,(MethodInfo *)0x0);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

