// BCAEBMNHBAN$$BNEAJEGGANE @ RVA 0x34E53C8

UnityEngine_Material_o *
BCAEBMNHBAN__BNEAJEGGANE
          (BCAEBMNHBAN_o *__this,UnityEngine_Material_o *OAAMFLOJJBM,
          UnityEngine_Sprite_o *DMMLPNCPPHD,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Texture2D_o *key;
  UnityEngine_Texture_o *KPIOMBGACKP;
  UnityEngine_Material_o *pUVar2;
  MethodInfo *method_00;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  UnityEngine_Material_o *local_28;
  
  if ((DAT_04568759 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<Texture,_Material>_TryGetValue__);
    DAT_04568759 = 1;
  }
  local_28 = (UnityEngine_Material_o *)0x0;
  if ((__this->fields).BGPDJHKBKCD != false) {
    if (DMMLPNCPPHD != (UnityEngine_Sprite_o *)0x0) {
      __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                  (__this->fields).DOLIDMOELJG;
      key = UnityEngine_Sprite__get_texture(DMMLPNCPPHD,(MethodInfo *)0x0);
      if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        method_00 = (MethodInfo *)&stack0xffffffffffffffd8;
        bVar1 = System_Collections_Generic_Dictionary<object,_object>__TryGetValue
                          (__this_00,(Il2CppObject *)key,(Il2CppObject **)method_00,
                           Method_System_Collections_Generic_Dictionary<Texture,_Material>_TryGetValue__
                          );
        if (bVar1) {
          return local_28;
        }
        KPIOMBGACKP = (UnityEngine_Texture_o *)
                      UnityEngine_Sprite__get_texture(DMMLPNCPPHD,(MethodInfo *)0x0);
        pUVar2 = BCAEBMNHBAN__BLHDMONEFKA(__this,KPIOMBGACKP,method_00);
        return pUVar2;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return OAAMFLOJJBM;
}

