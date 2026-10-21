// TypeDefIndex 3179
// Namespace: 
// public class BCAEBMNHBAN
// Fields:
//   private static BCAEBMNHBAN CBDMFFMCJBK; // 0x0
//   private Shader OLBJIPEFFAJ; // 0x10
//   private Shader IOEOBADINPK; // 0x18
//   private Dictionary<Texture, Material> DOLIDMOELJG; // 0x20
//   private Dictionary<Texture, Material> PLBHNKLOJNC; // 0x28
//   private bool BGPDJHKBKCD; // 0x30

// ===== public void NDNPGAKJLHM()  [RVA 0x34E514C]
// BCAEBMNHBAN$$NDNPGAKJLHM @ RVA 0x34E514C

void BCAEBMNHBAN__NDNPGAKJLHM(BCAEBMNHBAN_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  
  if ((DAT_04568756 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<Texture,_Material>_Clear__);
    DAT_04568756 = 1;
  }
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).DOLIDMOELJG;
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object,_object>__Clear
              (pSVar1,Method_System_Collections_Generic_Dictionary<Texture,_Material>_Clear__);
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).PLBHNKLOJNC
    ;
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary<object,_object>__Clear
                (pSVar1,Method_System_Collections_Generic_Dictionary<Texture,_Material>_Clear__);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void PJFFPGBMMOJ(bool CJNHFNHJHPE)  [RVA 0x34E51AC]
// BCAEBMNHBAN$$PJFFPGBMMOJ @ RVA 0x34E51AC

void BCAEBMNHBAN__PJFFPGBMMOJ(BCAEBMNHBAN_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).BGPDJHKBKCD = CJNHFNHJHPE;
  return;
}


// ===== private Material HFNHKAEBEKH(Texture KPIOMBGACKP)  [RVA 0x34E51B8]
// BCAEBMNHBAN$$HFNHKAEBEKH @ RVA 0x34E51B8

UnityEngine_Material_o *
BCAEBMNHBAN__HFNHKAEBEKH
          (BCAEBMNHBAN_o *__this,UnityEngine_Texture_o *KPIOMBGACKP,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Shader_o *pUVar2;
  System_String_o *pSVar3;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  UnityEngine_Shader_o **ppUVar4;
  UnityEngine_Object_o *pUVar5;
  
  if ((DAT_04568757 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<Texture,_Material>_Add__);
    FUN_01bab630(&UnityEngine_Material_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_12312/*"Sprite-UI-Opaque "*/);
    FUN_01bab630(&StringLiteral_4961/*"Custom/Sprite-UI-Opaque"*/);
    DAT_04568757 = 1;
  }
  ppUVar4 = &(__this->fields).IOEOBADINPK;
  pUVar5 = (UnityEngine_Object_o *)*ppUVar4;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality(pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar2 = UnityEngine_Shader__Find(StringLiteral_4961/*"Custom/Sprite-UI-Opaque"*/,(MethodInfo *)0x0);
    *ppUVar4 = pUVar2;
    thunk_FUN_01c20e04(ppUVar4,pUVar2);
  }
  pUVar2 = *ppUVar4;
  pUVar5 = (UnityEngine_Object_o *)thunk_FUN_01bda818(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor((UnityEngine_Material_o *)pUVar5,pUVar2,(MethodInfo *)0x0);
  if (KPIOMBGACKP != (UnityEngine_Texture_o *)0x0) {
    pSVar3 = UnityEngine_Object__get_name((UnityEngine_Object_o *)KPIOMBGACKP,(MethodInfo *)0x0);
    pSVar3 = System_String__Concat(StringLiteral_12312/*"Sprite-UI-Opaque "*/,pSVar3,(MethodInfo *)0x0);
    if (pUVar5 != (UnityEngine_Object_o *)0x0) {
      UnityEngine_Object__set_name(pUVar5,pSVar3,(MethodInfo *)0x0);
      __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                  (__this->fields).PLBHNKLOJNC;
      if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary<object,_object>__Add
                  (__this_00,(Il2CppObject *)KPIOMBGACKP,(Il2CppObject *)pUVar5,
                   Method_System_Collections_Generic_Dictionary<Texture,_Material>_Add__);
        return (UnityEngine_Material_o *)pUVar5;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public Material AOBCLEPMLHD(Material OAAMFLOJJBM, Sprite DMMLPNCPPHD)  [RVA 0x34E5310]
// BCAEBMNHBAN$$AOBCLEPMLHD @ RVA 0x34E5310

UnityEngine_Material_o *
BCAEBMNHBAN__AOBCLEPMLHD
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
  
  if ((DAT_04568758 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<Texture,_Material>_TryGetValue__);
    DAT_04568758 = 1;
  }
  local_28 = (UnityEngine_Material_o *)0x0;
  if ((__this->fields).BGPDJHKBKCD != false) {
    if (DMMLPNCPPHD != (UnityEngine_Sprite_o *)0x0) {
      __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                  (__this->fields).PLBHNKLOJNC;
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
        pUVar2 = BCAEBMNHBAN__HFNHKAEBEKH(__this,KPIOMBGACKP,method_00);
        return pUVar2;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return OAAMFLOJJBM;
}


// ===== public Material BNEAJEGGANE(Material OAAMFLOJJBM, Sprite DMMLPNCPPHD)  [RVA 0x34E53C8]
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


// ===== public void .ctor()  [RVA 0x34E55D8]
// BCAEBMNHBAN$$.ctor @ RVA 0x34E55D8

void BCAEBMNHBAN___ctor(BCAEBMNHBAN_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  System_Collections_Generic_Dictionary_Texture__Material__o **ppSVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456875a & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<Texture,_Material>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<Texture,_Material>_TypeInfo);
    DAT_0456875a = 1;
    method = extraout_x1;
  }
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
           thunk_FUN_01bda818(System_Collections_Generic_Dictionary<Texture,_Material>_TypeInfo,
                              method);
  System_Collections_Generic_Dictionary<object,_object>___ctor
            (pSVar1,Method_System_Collections_Generic_Dictionary<Texture,_Material>__ctor__);
  ppSVar2 = &(__this->fields).DOLIDMOELJG;
  *ppSVar2 = (System_Collections_Generic_Dictionary_Texture__Material__o *)pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
           thunk_FUN_01bda818(System_Collections_Generic_Dictionary<Texture,_Material>_TypeInfo);
  System_Collections_Generic_Dictionary<object,_object>___ctor
            (pSVar1,Method_System_Collections_Generic_Dictionary<Texture,_Material>__ctor__);
  ppSVar2 = &(__this->fields).PLBHNKLOJNC;
  *ppSVar2 = (System_Collections_Generic_Dictionary_Texture__Material__o *)pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  (__this->fields).BGPDJHKBKCD = true;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private Material BLHDMONEFKA(Texture KPIOMBGACKP)  [RVA 0x34E5480]
// BCAEBMNHBAN$$BLHDMONEFKA @ RVA 0x34E5480

UnityEngine_Material_o *
BCAEBMNHBAN__BLHDMONEFKA
          (BCAEBMNHBAN_o *__this,UnityEngine_Texture_o *KPIOMBGACKP,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Shader_o *pUVar2;
  System_String_o *pSVar3;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  BCAEBMNHBAN_Fields *pBVar4;
  UnityEngine_Object_o *pUVar5;
  
  if ((DAT_0456875b & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<Texture,_Material>_Add__);
    FUN_01bab630(&UnityEngine_Material_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_4960/*"Custom/Sprite-Geometry-Opaque"*/);
    FUN_01bab630(&StringLiteral_12311/*"Sprite-Geometry-Opaque "*/);
    DAT_0456875b = 1;
  }
  pBVar4 = &__this->fields;
  pUVar5 = (UnityEngine_Object_o *)pBVar4->OLBJIPEFFAJ;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality(pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar2 = UnityEngine_Shader__Find(StringLiteral_4960/*"Custom/Sprite-Geometry-Opaque"*/,(MethodInfo *)0x0);
    pBVar4->OLBJIPEFFAJ = pUVar2;
    thunk_FUN_01c20e04(pBVar4,pUVar2);
  }
  pUVar2 = pBVar4->OLBJIPEFFAJ;
  pUVar5 = (UnityEngine_Object_o *)thunk_FUN_01bda818(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor((UnityEngine_Material_o *)pUVar5,pUVar2,(MethodInfo *)0x0);
  if (KPIOMBGACKP != (UnityEngine_Texture_o *)0x0) {
    pSVar3 = UnityEngine_Object__get_name((UnityEngine_Object_o *)KPIOMBGACKP,(MethodInfo *)0x0);
    pSVar3 = System_String__Concat(StringLiteral_12311/*"Sprite-Geometry-Opaque "*/,pSVar3,(MethodInfo *)0x0);
    if (pUVar5 != (UnityEngine_Object_o *)0x0) {
      UnityEngine_Object__set_name(pUVar5,pSVar3,(MethodInfo *)0x0);
      __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                  (__this->fields).DOLIDMOELJG;
      if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary<object,_object>__Add
                  (__this_00,(Il2CppObject *)KPIOMBGACKP,(Il2CppObject *)pUVar5,
                   Method_System_Collections_Generic_Dictionary<Texture,_Material>_Add__);
        return (UnityEngine_Material_o *)pUVar5;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static BCAEBMNHBAN AIHNLLGNBLC()  [RVA 0x34E568C]
// BCAEBMNHBAN$$AIHNLLGNBLC @ RVA 0x34E568C

BCAEBMNHBAN_o * BCAEBMNHBAN__AIHNLLGNBLC(MethodInfo *method)

{
  BCAEBMNHBAN_o *pBVar1;
  undefined1 auVar2 [16];
  
  if ((DAT_0456875c & 1) == 0) {
    FUN_01bab630(&BCAEBMNHBAN_TypeInfo);
    DAT_0456875c = 1;
  }
  pBVar1 = BCAEBMNHBAN_TypeInfo->static_fields->CBDMFFMCJBK;
  if (pBVar1 == (BCAEBMNHBAN_o *)0x0) {
    auVar2 = thunk_FUN_01bda818();
    pBVar1 = auVar2._0_8_;
    BCAEBMNHBAN___ctor(pBVar1,auVar2._8_8_);
    BCAEBMNHBAN_TypeInfo->static_fields->CBDMFFMCJBK = pBVar1;
    thunk_FUN_01c20e04(BCAEBMNHBAN_TypeInfo->static_fields,pBVar1);
    pBVar1 = BCAEBMNHBAN_TypeInfo->static_fields->CBDMFFMCJBK;
  }
  return pBVar1;
}

