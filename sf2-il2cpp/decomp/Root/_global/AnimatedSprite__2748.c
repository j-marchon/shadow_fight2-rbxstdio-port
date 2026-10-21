// TypeDefIndex 2748
// Namespace: 
// public class AnimatedSprite : MonoBehaviour
// Fields:
//   private List<Sprite> EJNOBBDDBDO; // 0x20
//   private SpriteRenderer CAOKGHKPFAE; // 0x28
//   private float BJIKPLGMOMI; // 0x30
//   private float PBKECMFHOPO; // 0x34
//   private int FJJPFEGPEFA; // 0x38
//   private int KOCFHNLDNFB; // 0x3C
//   private bool HFCMLMAKMNJ; // 0x40
//   private int EGNEJBJIAJC; // 0x44

// ===== public void set_ChangeSpriteTime(float CJNHFNHJHPE)  [RVA 0x33F5E20]
// AnimatedSprite$$set_ChangeSpriteTime @ RVA 0x33F5E20

void AnimatedSprite__set_ChangeSpriteTime
               (AnimatedSprite_o *__this,float CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).PBKECMFHOPO = CJNHFNHJHPE;
  return;
}


// ===== private void GDAGKPBCOBE()  [RVA 0x33F5E28]
// AnimatedSprite$$GDAGKPBCOBE @ RVA 0x33F5E28

void AnimatedSprite__GDAGKPBCOBE(AnimatedSprite_o *__this,MethodInfo *method)

{
  int iVar1;
  MethodInfo *in_x2;
  
  AnimatedSprite__DHEBEHGMBOA(__this,(__this->fields).FJJPFEGPEFA,in_x2);
  iVar1 = (__this->fields).FJJPFEGPEFA + 1;
  (__this->fields).FJJPFEGPEFA = iVar1;
  if ((__this->fields).KOCFHNLDNFB <= iVar1) {
    iVar1 = (__this->fields).EGNEJBJIAJC;
    (__this->fields).FJJPFEGPEFA = 0;
    if ((iVar1 != -1) && (iVar1 = iVar1 + -1, (__this->fields).EGNEJBJIAJC = iVar1, iVar1 < 1)) {
      (__this->fields).HFCMLMAKMNJ = false;
    }
  }
  return;
}


// ===== public void set_Iterations(int CJNHFNHJHPE)  [RVA 0x33F5F00]
// AnimatedSprite$$set_Iterations @ RVA 0x33F5F00

void AnimatedSprite__set_Iterations(AnimatedSprite_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).EGNEJBJIAJC = CJNHFNHJHPE;
  return;
}


// ===== public List<Sprite> get_Frames()  [RVA 0x33F5F08]
// AnimatedSprite$$get_Frames @ RVA 0x33F5F08

System_Collections_Generic_List_Sprite__o *
AnimatedSprite__get_Frames(AnimatedSprite_o *__this,MethodInfo *method)

{
  return (__this->fields).EJNOBBDDBDO;
}


// ===== private void DHEBEHGMBOA(int JJMCKHDALCF)  [RVA 0x33F5E78]
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


// ===== public bool get_IsWork()  [RVA 0x33F5F10]
// AnimatedSprite$$get_IsWork @ RVA 0x33F5F10

bool AnimatedSprite__get_IsWork(AnimatedSprite_o *__this,MethodInfo *method)

{
  return (__this->fields).HFCMLMAKMNJ;
}


// ===== private void Awake()  [RVA 0x33F5F18]
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


// ===== public void .ctor()  [RVA 0x33F5F80]
// AnimatedSprite$$.ctor @ RVA 0x33F5F80

void AnimatedSprite___ctor(AnimatedSprite_o *__this,MethodInfo *method)

{
  (__this->fields).EGNEJBJIAJC = -1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void SetFirstFrame()  [RVA 0x33F5F90]
// AnimatedSprite$$SetFirstFrame @ RVA 0x33F5F90

void AnimatedSprite__SetFirstFrame(AnimatedSprite_o *__this,MethodInfo *method)

{
  MethodInfo *in_x2;
  
  AnimatedSprite__DHEBEHGMBOA(__this,0,in_x2);
  return;
}


// ===== public void SetFrames(Sprite[] CEOMAJNEJFK)  [RVA 0x33F5F98]
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


// ===== public void Render(float BLENDMCELBE)  [RVA 0x33F604C]
// AnimatedSprite$$Render @ RVA 0x33F604C

void AnimatedSprite__Render(AnimatedSprite_o *__this,float BLENDMCELBE,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  UnityEngine_SpriteRenderer_o *x;
  float fVar2;
  
  if ((DAT_04567f95 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567f95 = 1;
    method = extraout_x1;
  }
  if ((__this->fields).HFCMLMAKMNJ != false) {
    x = (__this->fields).CAOKGHKPFAE;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((!bVar1) &&
       (fVar2 = (__this->fields).BJIKPLGMOMI + BLENDMCELBE, (__this->fields).BJIKPLGMOMI = fVar2,
       (__this->fields).PBKECMFHOPO <= fVar2)) {
      AnimatedSprite__GDAGKPBCOBE(__this,method_00);
      (__this->fields).BJIKPLGMOMI = 0.0;
    }
  }
  return;
}

