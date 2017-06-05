/**
*	@file	Player.h
*
*	@brief	���@
*
*	@date	2015/05/08
*
*	@author	���V�@�L��
*/
#pragma once

#include <d3d11_1.h>
#include <SimpleMath.h>
#include <Keyboard.h>
#include <vector>
#include "Obj3D.h"


// ���@
class Player
{
public:
	// ���{�b�g�p�[�c
	// ���@�p�[�c
	enum PARTS
	{
		PARTS_UFO,		// UFO
		PARTS_HEAD,		// ��
		PARTS_LWING,		// ����
		PARTS_RWING,		// �E��
		PARTS_LVERNIER,	// ���i�@
		PARTS_RVERNIER,	// ���i�@

		PARTS_NUM
	};

	// �R���X�g���N�^
	Player(DirectX::Keyboard* keyboard);
	// �f�X�g���N�^
	~Player();
	// ������
	void Initialize();
	// ���t���[���X�V
	void Update();
	// �s��̌v�Z
	void Calc();
	// �`��
	void Draw();
	// ���W���擾
	const DirectX::SimpleMath::Vector3& GetTrans();
	// ���W��ݒ�
	void SetTrans(const DirectX::SimpleMath::Vector3& trans);
	// ��]��ݒ�
	void SetRot(const DirectX::SimpleMath::Vector3& rot);
	// ���[���h�s����擾
	const DirectX::SimpleMath::Matrix& GetLocalWorld();

protected:
	// �����o�ϐ�
	// ���{�b�g�̍\���p�[�c
	std::vector<Obj3d>	m_Obj;
	// �L�[�{�[�h
	DirectX::Keyboard* m_pKeyboard;
	DirectX::Keyboard::KeyboardStateTracker m_KeyboardTracker;

	// �T�C���p�̊p�x
	float m_cycle;
};
